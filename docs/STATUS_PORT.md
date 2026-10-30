# Tablero del port (una fila por tarea)

Lo actualiza la sesión de integración con cada fusión. El plan, las reglas y las puertas de autorización están en `docs/PLAN_64BIT.es.md`.
Estados: **hecho** (con commit y prueba), **en curso**, **pendiente**, **esperando** (a una decisión, un permiso o un equipo).

| Hito | Tarea | Dueño | Estado | Commit | Prueba que lo demuestra |
|---|---|---|---|---|---|
| H0 | Tablero, ramas al día, nada sin commit | integración | hecho | este archivo | ramas subidas (`git ls-remote`), worktree limpio |
| — | Arena de 64 bits (2 GiB por defecto, 4 GiB disponible) | integración | hecho | `fec2e4c` | `guest_arena`, `raw_platform_arena`, `raw_platform_arena_4g`, `platform64_4g` |
| — | Platform64: imagen, imports, hilos, timers, SEH | integración | hecho | `9341c3b` y siguientes | `platform64` |
| — | Capas Win32 / DirectInput para 64 bits | platform-api | hecho | `65f3a26` (merge) | `platform64` (registro, recursos, user32, archivos) |
| — | Direct3D 9 del guest sobre la capa nue_d3d9 (GPU nula) | D3D9 | hecho | `03bb75a` (merge) | `d3d9_facade`, arranque hasta el bucle principal |
| — | DirectSound sobre la arena | integración | hecho | `a9e330c` | `dsound_install64` |
| — | Backend rápido x86_64 | integración + generador | hecho | `abcf3fd` | `fast64_boot` (misma secuencia de imports que el motor de referencia) |
| H1 | Mods completos en 64 bits (ventana, registro, gamma portados) | integración | hecho | `9364b57`, `f18c845` | `NFSU2_BOOT64_MODS=all` hasta el bucle principal; 32 bits 58/58, 64 bits 48/48 |
| H2 | Todo AOT: módulos de audio traducidos, SLEIGH fuera del producto (32 y 64) | integración + generador | en curso: código de los 176 bancos extraído (87 rangos, 183 KB, `docs/AUDIO_MODULES.md`); traducción encargada al generador | `9790481` | arranque sin intérprete con la misma secuencia de imports y el mismo audio |
| H3 | Núcleo de 64 bits sin Windows (arena POSIX, sin `windows.h`, servicios sobre NUE) | integración + platform-api + audio | pendiente | | build linux-x64 en CI |
| H4 | Ventana SDL3 de NUE visible en Windows x64, bgfx dibujando | nue-core, nue-gfx | pendiente (autorizado) | | ventana y frame dibujado |
| H5 | El juego en la ventana de NUE en Windows x64 (GPU, entrada, audio reales) | integración + D3D9 + platform-api + audio | pendiente (autorizado) | | el usuario juega menú, carga y carrera |
| H6 | Un solo launcher (`nue_main`), datos por carpeta o importación, conversión de texturas, paquetes | integración | pendiente | | paquete Windows x64 probado por el usuario |
| H7 | Linux x64 | integración + nue-linux | pendiente | | artefacto de CI |
| H8 | Android arm64 | integración + nue-android + generador | pendiente | | APK instalado por `adb` y probado |
| H9 | iOS arm64 | integración + nue-ios | esperando (cuenta de Apple) | | IPA firmada probada |
| H10 | Móvil: modo táctil, controles en pantalla, HUD y menús | integración + platform-api | pendiente | | revisión del usuario en el teléfono |

Decisiones abiertas: x87 por defecto en arm64 (`double` recomendado).
