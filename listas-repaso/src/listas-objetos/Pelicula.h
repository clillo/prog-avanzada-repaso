#ifndef PELICULA_H
#define PELICULA_H

#include <string>

class Pelicula {
private:
    int año;
    std::string titulo;

public:
    Pelicula(int año, std::string titulo);
    int getAño() const;
    std::string getTitulo() const;
};

#endif
