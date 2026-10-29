#ifndef NODO_H
#define NODO_H

#include "Pelicula.h"

class Nodo {
private:
    Pelicula pelicula;
    Nodo* siguiente;

public:
    Nodo(Pelicula pelicula);
    Pelicula getPelicula() const;
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* siguiente);
};

#endif
