cmake_minimum_required(VERSION 3.16)
project(listas-repaso LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(listas-repaso
  src/main.cpp
)

add_executable(listas-objetos
  src/listas-objetos/main.cpp
  src/listas-objetos/Pelicula.cpp
  src/listas-objetos/Nodo.cpp
  src/listas-objetos/ListaSimple.cpp
)

target_include_directories(listas-objetos PRIVATE src/listas-objetos)

add_executable(listas-ordenadas
  src/listas-ordenadas/main.cpp
  src/listas-ordenadas/Nodo.cpp
  src/listas-ordenadas/ListaOrdenada.cpp
)

target_include_directories(listas-ordenadas PRIVATE src/listas-ordenadas)

if(MSVC)
  target_compile_options(listas-repaso PRIVATE /W4)
  target_compile_options(listas-objetos PRIVATE /W4)
  target_compile_options(listas-ordenadas PRIVATE /W4)
else()
  target_compile_options(listas-repaso PRIVATE -Wall -Wextra -Wpedantic)
  target_compile_options(listas-objetos PRIVATE -Wall -Wextra -Wpedantic)
  target_compile_options(listas-ordenadas PRIVATE -Wall -Wextra -Wpedantic)
endif()
