# listas-repaso

Proyecto C++ de repaso de listas (MinGW + CMake).

## Requisitos

- MinGW-w64 (`g++`)
- CMake 3.16+
- Git (opcional)

## Compilar y ejecutar

```powershell
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
.\build\listas-repaso.exe
```

Si preferís Ninja:

```powershell
cmake -S . -B build -G Ninja
cmake --build build
.\build\listas-repaso.exe
```
