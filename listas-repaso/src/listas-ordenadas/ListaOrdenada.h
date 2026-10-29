#ifndef LISTA_ORDENADA_H
#define LISTA_ORDENADA_H

#include "Nodo.h"

class ListaOrdenada {
private:
    Nodo* cabeza;

public:
    ListaOrdenada();
    bool estaVacia() const;
    void insertar(int valor);
    bool eliminar(int valor);
    void mostrar() const;
};

#endif
