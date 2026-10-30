# Plan del port (desde cero)

Escrito para que el usuario no tenga que revisar lo que hace cada sesión: dice qué se busca, en qué orden, quién lo hace, cómo se
demuestra cada paso y qué necesita su autorización. Sustituye al plan anterior de este archivo.

## 1. Objetivo

Un solo launcher y un solo código fuente, en 64 bits, que se compila para Windows, Linux, macOS, Android e iOS. Por plataforma solo
cambia el paquete con que se abre (`.exe`, binario de Linux, `.app`, `.apk`, `.ipa`) y el backend de NUE que se enlaza. El juego
traducido, la plataforma del guest, las capas Win32 / Direct3D 9 / DirectSound / DirectInput, los mods y el launcher son el mismo
código. (Un paquete lleva solo el código máquina de su sistema; lo común es el repositorio.)

## 2. Reglas (del usuario; valen para todas las sesiones)

1. **Todo AOT** en todas las plataformas: ningún intérprete ni JIT ejecuta código del juego en el producto. SLEIGH solo en pruebas.
2. **Todo en el repositorio público**: `export/`, `generated*/`, módulos volcados y sus páginas traducidas. Nunca se purga.
3. **No se vuelve a Ghidra.** Lo nuevo (módulos de audio) se decodifica al compilar con la librería SLEIGH del árbol.
4. **Ventanas solo de NUE** (backend SDL3: `nue_window_create`, `nue_window_get_native`). Nadie crea ventanas Win32 a mano.
5. **No se abre el juego ni ninguna ventana** sin autorización del usuario. Las pruebas son sin ventana.
6. **El producto de 32 bits no cambia** (comportamiento y valores por defecto) hasta que el usuario apruebe su reemplazo.
7. **Commit de cada cambio y push inmediato** (`git push origin HEAD:<rama>`, nunca force), identidad noreply, sin `Co-Authored-By`,
   `git add` con rutas explícitas, sin rutas personales ni datos de usuario en archivos.
8. **Compilación local solo Windows x86/x64**; lo demás en CI. Paralelismo moderado; cada sesión borra sus carpetas de build al terminar.
9. **Ninguna decisión unilateral**: si una tarea obliga a desactivar, quitar o sustituir algo que existe, se pregunta antes.

## 3. Cómo se trabaja

* **Una sola rama de integración**: `integrate-port`. Solo la sesión de integración fusiona en ella; cada sesión trabaja en su rama y avisa.
* **Una tarea a la vez por sesión**, con dueño, archivos que toca (sin solaparse con otra sesión), prueba que la demuestra y salida concreta.
* **Informe fijo de cada sesión** al terminar una tarea: commit (id, subido), qué hace, pruebas que pasan (32 y 64 bits), qué no está hecho.
  La integración lo comprueba en el repositorio antes de decírselo al usuario: el informe de una sesión no es una prueba.
* **Tablero**: `docs/STATUS_PORT.md` (lo crea la integración) con una fila por tarea: dueño, estado, commit, prueba. Se actualiza con cada fusión.
  El usuario mira el tablero, no las sesiones.
* **Puertas de autorización** (se para y se pregunta): abrir una ventana o el juego; cambiar algo del producto de 32 bits; quitar o desactivar
  una función; añadir una dependencia; reescribir historial; cualquier elección con compromiso (tamaños por defecto, modos del x87...).

## 4. Estado real (comprobado en el repositorio el 2026-10-30)

| Pieza | Estado |
|---|---|
| Producto de 32 bits (`launcher.cpp`, `native32.cpp`) | funciona; usa Windows real y SLEIGH para 5 módulos de audio (~4,2 KB) |
| Memoria de 64 bits (arena) | hecha y probada; solo implementación Windows |
| `Platform64` (imports, hilos, timers, SEH) | hecha y probada; usa `windows.h` en 3 puntos |
| Capas Win32, DirectInput, Direct3D 9, DirectSound para 64 bits | hechas y probadas sin ventana; Direct3D 9 dibuja en la GPU nula |
| Juego traducido x86_64 | corre: el arranque sin ventana llega al bucle principal (motor rápido = motor de referencia en imports) |
| Juego traducido aarch64 | compila; nunca ejecutado |
| Mods en 64 bits | compilan con sus ganchos; **cambio sin commit** que deja ventana, registro y gamma sin portar (pendiente de decisión del usuario) |
| Ventana, GPU, entrada y audio reales en 64 bits | no hecho; parado por el usuario hasta que NUE abra su ventana SDL3 |
| NUE (motor) | API y núcleo probados con backend nulo; backends reales escritos, no ejecutados en dispositivo |
| CI del repositorio del juego | bloqueado (minutos); sin él no hay builds de Linux, Android, iOS |

## 5. Hitos (en orden; cada uno termina con la salida indicada y el aviso al usuario)

| # | Hito | Dueño | Salida que lo demuestra | Puerta |
|---|---|---|---|---|
| H0 | Tablero `STATUS_PORT.md`, ramas al día, nada sin commit | integración | tablero en el repo; todas las ramas subidas | — |
| H1 | Mods en 64 bits completos (ventana, registro, gamma portados sobre las capas, sin desactivar nada) | integración | `fast64_boot` con mods instalados; pruebas 32/64 en verde | decisión del usuario (pendiente) |
| H2 | Todo AOT: módulos de audio volcados en `export/modules/`, traducidos, verificados por hash; SLEIGH fuera del producto (32 y 64) | integración + generador | arranque sin ventana con la misma secuencia de imports y el mismo audio, sin intérprete | cambiar el producto de 32 bits |
| H3 | Núcleo de 64 bits sin Windows: arena POSIX, `Platform64` y capas sin `windows.h`, servicios del juego sobre NUE | integración + platform-api + audio | el núcleo compila para linux-x64 (CI); Windows x64 igual que antes | — |
| H4 | Ventana NUE en Windows x64 verificada | nue-core, nue-gfx | ventana SDL3 visible y bgfx dibujando en ella | abrir ventana |
| H5 | El juego en una ventana NUE en Windows x64: GPU real, entrada, audio | integración + D3D9 + platform-api + audio | el usuario juega menú, carga y carrera | abrir el juego |
| H6 | Un solo launcher (`nue_main`), datos del juego por carpeta o importación, empaquetado por destino | integración | paquete de Windows x64 probado por el usuario | — |
| H7 | Linux x64 | integración + nue-linux | artefacto de CI; prueba del usuario si tiene equipo | CI |
| H8 | Android arm64 | integración + nue-android + generador | APK de CI; prueba en teléfono (orden de memoria, rendimiento) | CI, teléfono |
| H9 | iOS arm64 | integración + nue-ios | IPA de CI firmada; prueba en iPhone | CI, cuenta Apple, iPhone |
| H10 | Móvil: modo táctil sin teclado ni mando, controles en pantalla, HUD y menús | integración + platform-api | revisión del usuario en el teléfono | — |

## 6. Lo que necesito del usuario (en este orden)

1. H1: portar completos los mods de ventana, registro y gamma (recomendado) o dejarlos para después.
2. H2: aprobar que el producto de 32 bits también deje SLEIGH cuando los módulos estén traducidos.
3. Tamaño de la arena por defecto (2 GiB recomendado) y x87 por defecto en arm64 (`double` recomendado).
4. H4 y H5: autorización para abrir la ventana de NUE y después el juego.
5. CI: desbloquear minutos del repositorio del juego (o compilar con el CI de NUE).
6. Equipos: teléfono Android; iPhone y cuenta de desarrollador de Apple.

## 7. Riesgos

Nada de arm64 ejecutado aún (orden de memoria, rendimiento); backends de NUE sin probar en dispositivos; shaders y memoria de texturas en
móvil sin medir; sin CI no se compila nada que no sea Windows.
