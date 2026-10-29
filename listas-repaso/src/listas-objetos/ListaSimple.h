#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include "Nodo.h"
#include "Pelicula.h"
#include <string>

class ListaSimple {
private:
    Nodo* cabeza;

public:
    ListaSimple();
    bool estaVacia() const;
    void insertarInicio(Pelicula pelicula);
    void insertarFinal(Pelicula pelicula);
    bool eliminar(const std::string& titulo);
    void mostrar() const;
};

#endif
