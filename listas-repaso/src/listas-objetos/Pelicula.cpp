#include "Pelicula.h"

Pelicula::Pelicula(int año, std::string titulo) {
    this->año = año;
    this->titulo = titulo;
}

int Pelicula::getAño() const {
    return año;
}

std::string Pelicula::getTitulo() const {
    return titulo;
}
