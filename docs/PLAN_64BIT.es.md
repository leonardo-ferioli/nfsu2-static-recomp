# Plan: el launcher de 64 bits, ejecutable en cada plataforma

Objetivo: **un solo launcher, un solo código fuente**, que se compila en 64 bits para Windows, Linux, macOS, Android e iOS. Lo único que
cambia entre plataformas es **cómo se abre** (el paquete: `.exe`, binario de Linux/AppImage, `.app`, `.apk`/`.aab`, `.ipa`) y qué
backend del sistema se enlaza. El juego traducido, la plataforma del guest, las capas Win32 / Direct3D 9 / DirectSound / DirectInput,
los mods y la lógica del launcher son **el mismo código** en todos.

Una precisión técnica: un paquete solo puede llevar el código máquina de su sistema (un `.ipa` lleva código arm64 de iOS, no puede
ejecutar código de Windows). Lo que comparten todas las versiones es el **repositorio y el código fuente**: el código de Windows, de
Linux, de Android y de iOS está en el mismo árbol, y cada compilación elige el suyo con su preset. Así se ve un solo producto que se
"exporta" a cada plataforma.

Reglas que rigen el plan (del usuario): **todo AOT** en todas las plataformas (ningún intérprete ni JIT ejecuta código del juego en el
producto; SLEIGH solo en pruebas), **todo queda en el repositorio público** (`export/`, `generated*/`, módulos volcados y sus páginas
traducidas), **no se vuelve a Ghidra**, el producto de 32 bits no cambia mientras no esté reemplazado, cada commit se sube.

## 1. Qué hay hoy (revisado en el repositorio, 2026-10-30)

| Pieza | Dónde | Estado |
|---|---|---|
| Juego traducido (AOT) | `generated/` (referencia), `generated_fast/` (x86-32), `generated_fast64/` (x86_64, no versionado aún) | completo para la imagen principal; x86_64 corre; aarch64 compila (`tools/cross_gate.py`), **nunca ejecutado** |
| Memoria de 64 bits | `guest_memory.hpp`, `guest_arena.*` | hecho (arena configurable, 2 y 4 GiB probados); implementación **solo Windows** (falta POSIX) |
| Plataforma del guest | `platform64.*`, `platform64_seh.cpp` | hecho: imagen, pilas, imports por token, hilos, callbacks, SEH; usa `windows.h` para SHA-256, entorno y ruta del programa |
| Capas legacy | `win32_facade*.cpp` + `legacy_win32/` (Win32, DirectInput), `win32_facade_d3d9.cpp` + `nue_d3d9/` (Direct3D 9), `platform/audio/` (DirectSound) | hechas sin ventana; Direct3D 9 dibuja en la GPU nula; DirectSound mezcla de verdad |
| Código generado en ejecución | `dynamic_code.cpp` (SLEIGH) | **contradice la regla AOT**: hoy interpreta 5 módulos de audio (~4,2 KB) en 32 y en 64 bits |
| Mods | `mods_*.cpp`, `tools/mods/*.py` | en 32 bits completos; en 64 bits compilan con sus ganchos; ventana, registro y gamma **pendientes de portar** (cambio sin commit) |
| Servicios de plataforma | `platform/*.hpp` (interfaces), `platform/std`, `platform/null`, `platform/win32` | interfaces portables; solo hay backend Windows y nulo |
| Launcher | `launcher.cpp` (700 líneas) | **solo 32 bits / Windows**: construye `NativePlatform`, usa `windows.h`, consola, diálogos, BCrypt |
| Arranque de 64 bits | `runner.cpp --boot64`, `speed_fast64` | herramienta de prueba sin ventana: llega al bucle principal del juego |
| Empaquetado | `tools/package_launcher.py` | solo el paquete de 32 bits para Windows |
| Motor NUE | repo `nue-engine` (público): `include/nue/*.h` (ventana, entrada con táctil y mando, audio, gfx con bgfx, storage/VFS con importación de datos, power, config, diag), `nue::entry` (`nue_main` en cada sistema), backends `src/platform/{windows,linux,android,ios,sdl3}`, `android/` (Gradle), `ios/` (XcodeGen), CI (`ci.yml`, `release.yml`) | API y núcleo probados con el backend nulo; backends reales **escritos, no ejecutados en dispositivo** (Android: AAR y APK de ejemplo compilan con el NDK) |

Bloqueos externos conocidos: los minutos de GitHub Actions del repositorio del juego están bloqueados (límite de gasto), y aquí solo
se compila para Windows x86/x64: **sin CI no hay builds de Linux, Android ni iOS del juego**. No hay teléfono ni Mac para probar.

## 2. La arquitectura de destino (igual en todas las plataformas)

```
 paquete por plataforma (.exe / Linux / .app / .apk / .ipa)      <- lo único distinto: cómo se abre
   nue::entry -> nue_main()                                        <- entrada portable (WinMain, main, SDL_main, UIApplicationMain)
   launcher portable: config (launcher.ini), datos del juego,       <- un solo launcher.cpp, sin windows.h
                      verificación SHA-256, mods, arranque
   Platform64 + arena (memoria del guest)                           <- portable
   capas legacy: Win32, DirectInput, Direct3D 9, DirectSound         <- portables (port hoy, NUE legacy-* mañana)
   juego traducido AOT para la ISA (x86_64 o aarch64) + módulos AOT  <- el mismo generador
   NUE nativo: ventana, entrada, audio, gfx (bgfx), storage, power   <- un backend por sistema
```

## 3. Fases

Cada fase termina en commits subidos, pruebas en verde a 32 y 64 bits, y un aviso a la sesión principal con el id del commit.

### F1. Núcleo de 64 bits sin Windows (portabilidad del código)
1. `guest_arena.cpp`: implementación POSIX (`mmap` con `PROT_NONE`, `mprotect` por página), o sobre la memoria de NUE.
2. `platform64.cpp`: SHA-256 con el de NUE (o uno portable), entorno con `getenv`, ruta del programa con NUE; fuera `windows.h`.
3. `runtime.cpp`, `userops.cpp`, `speed.cpp`: las partes Windows solo para el host de 32 bits.
4. `dsound_install.cpp`: la salida de audio por el audio de NUE (no WASAPI) en 64 bits; `port_guest_memory` queda solo para 32 bits.
5. `platform/services`: backend NUE de las interfaces `Window`, `Display`, `Input`, `Storage`, `Config`, `System`, `Clock`, `Threads`.
6. Mods: quitar los `windows.h` que no hacen falta (`mods_core`, `mods_rendering`, `mods_widescreen`), y lo que queda de Windows tras sus interfaces.

Salida: el núcleo (juego + Platform64 + capas + mods) compila para `linux-x64` y `android-arm64` (en CI, cuando haya minutos), y el arranque
sin ventana sigue dando la misma secuencia de imports en Windows x64 (`fast64_boot`).

### F2. Todo AOT: los módulos de audio traducidos por adelantado
1. Volcado: en el arranque sin ventana, cada región que el cargador del juego (`0x7212e5`) hace ejecutable se guarda (dirección, tamaño,
   SHA-256, bytes, reubicaciones) en `export/modules/` (repositorio).
2. Decodificación en compilación con la librería SLEIGH del árbol (sin Ghidra, sin ejecución) al formato de `export/`.
3. El generador traduce los módulos como páginas más (`--modules`), en 32 y en 64 bits; la posición se fija o se traduce con su tabla de reubicación.
4. En ejecución, `VirtualProtect`/`VirtualAlloc` ejecutable comprueba el hash del módulo y enlaza sus páginas; un hash desconocido es un error claro.
5. Prueba de cobertura: ningún salto a código sin traducir (ampliar `test_reg_entries.py` / `discover_gap_entries.py` a los módulos).
6. SLEIGH sale del producto (32 y 64 bits: el launcher deja de exigir `sleigh/x86.sla`); queda en las pruebas comparando con la versión AOT.

Salida: el arranque llega al bucle principal **sin intérprete**, con la misma secuencia de imports y el mismo audio mezclado que con SLEIGH.

### F3. Ventana, GPU, entrada y audio reales, primero en Windows x64
1. Gráficos: `Win32LayerOptions::d3d9_gpu` con la GPU de NUE (bgfx, modo MANAGED) sobre la ventana de la plataforma (dueño: sesión D3D9).
2. Ventana: el grupo user32 sobre `nue_window` (la ventana del juego es una ventana de NUE; el HWND del guest es un token).
3. Entrada: teclado, ratón y mando de NUE hacia la fachada de DirectInput y los mensajes de ventana.
4. Audio: el stream de NUE como salida del mezclador de DirectSound.
5. Mods portados, no desactivados: modos de ventana sobre la ventana de NUE (la misma lógica de `mods_system`), ajustes en archivo sobre
   el registro de la capa Win32 guardado con el storage de NUE, gamma de consola como posproceso en la capa gráfica.

Salida: el usuario juega en Windows x64 (menú, carga, carrera) y compara con el de 32 bits.

### F4. Un solo launcher
1. `launcher.cpp` se separa en un núcleo portable (configuración, `launcher.ini`, verificación de `SPEED2.EXE`, instalación de mods,
   arranque, informes) y la entrada por `nue::entry`; los diálogos y la consola pasan por NUE.
2. El núcleo elige plataforma por compilación: `NativePlatform` en el producto de 32 bits (hasta que se retire), `Platform64` en 64 bits.
3. Datos del juego: en escritorio, una carpeta (como hoy); en móvil, importación una vez con el selector del sistema (SAF / Archivos)
   hacia el almacenamiento de la app, con verificación de hashes (`nue_storage` import).
4. Empaquetado por destino: `tools/package_launcher.py --target windows-x64|linux-x64|macos|android|ios` (`.exe` y carpeta; binario o AppImage;
   `.app`; `.apk`/`.aab` con Gradle de NUE; `.ipa` con XcodeGen de NUE).

Salida: un paquete de Windows x64 probado por el usuario y artefactos de Linux x64 de CI.

### F5. Cada plataforma
Linux x64 (y SteamOS) -> Android arm64 -> iOS arm64 -> macOS. Para cada una: páginas de su ISA, backend NUE de su sistema, paquete, y la
prueba en un equipo real (por el usuario o por CI con dispositivos).

### F6. arm64 de verdad
Prueba de orden de memoria (`tools/litmus/tso_litmus.cpp`) en un dispositivo, decisión del x87 por defecto en arm64 (`double` recomendado
por el generador), medición de rendimiento y de memoria (presupuesto de 2 GB del ROADMAP).

### F7. Móvil
Modo táctil cuando no hay teclado ni mando (detección en la entrada de NUE), controles en superposición, HUD y menús adaptados, safe areas.

## 4. Quién hace qué

| Trabajo | Dueño |
|---|---|
| Integración, Platform64, arena POSIX, launcher portable, AOT de módulos en ejecución | integrate-port (esta sesión) |
| Generador (`--modules`, aarch64) | translated-code-guest-re |
| Capas Win32 / DirectInput | platform-api |
| Direct3D 9 sobre la GPU real | dueño de D3D9 (nue-d3d9) |
| DirectSound sobre el audio de NUE | port-dsound / nue-dsound |
| Backends de sistema (ventana, entrada, audio, storage) | nue-windows, nue-linux, nue-android, nue-ios (sobre nue-core) |
| CI, merges, empaquetado de NUE | sesión principal |

## 5. Decisiones que necesito del usuario

1. Portar completos los mods de ventana, registro y gamma en 64 bits (recomendado) o dejarlos para después.
2. Tamaño de la arena por defecto: 2 GiB (recomendado: el juego no usa más) o 4 GiB.
3. x87 en arm64: `double` por defecto (recomendado) o `soft80` (exacto y mucho más lento).
4. Que el producto de 32 bits también deje SLEIGH en cuanto los módulos estén traducidos (la regla AOT lo pide).
5. Desbloquear los minutos de CI del repositorio del juego (o usar el CI de NUE) para compilar Linux, Android e iOS.
6. Equipos de prueba: un teléfono Android, un iPhone con cuenta de desarrollador para firmar, opcional un Linux/SteamOS.

## 6. Riesgos

* Nada de arm64 se ha ejecutado: el orden de memoria y el rendimiento son desconocidos hasta tener un dispositivo.
* Los backends reales de NUE están escritos pero no ejecutados en dispositivo.
* Gráficos móviles: shaders y memoria de texturas (BC a ASTC/ETC2) aún sin medir en teléfono.
* Sin CI, todo lo que no es Windows queda sin compilar.
