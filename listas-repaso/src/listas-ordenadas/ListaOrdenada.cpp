#include "ListaOrdenada.h"
#include <iostream>

ListaOrdenada::ListaOrdenada() {
    cabeza = nullptr;
}

bool ListaOrdenada::estaVacia() const {
    return cabeza == nullptr;
}

void ListaOrdenada::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);

    if (estaVacia() || valor < cabeza->getDato()) {
        nuevo->setSiguiente(cabeza);
        cabeza = nuevo;
        return;
    }

    Nodo* actual = cabeza;
    while (actual->getSiguiente() != nullptr &&
           actual->getSiguiente()->getDato() <= valor) {
        actual = actual->getSiguiente();
    }

    nuevo->setSiguiente(actual->getSiguiente());
    actual->setSiguiente(nuevo);
}

bool ListaOrdenada::eliminar(int valor) {
    if (cabeza == nullptr) return false;

    if (cabeza->getDato() == valor) {
        Nodo* borrar = cabeza;
        cabeza = cabeza->getSiguiente();
        delete borrar;
        return true;
    }

    Nodo* anterior = cabeza;
    Nodo* actual = cabeza->getSiguiente();

    while (actual != nullptr && actual->getDato() != valor) {
        anterior = actual;
        actual = actual->getSiguiente();
    }

    if (actual == nullptr) return false;

    anterior->setSiguiente(actual->getSiguiente());
    delete actual;
    return true;
}

void ListaOrdenada::mostrar() const {
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        std::cout << actual->getDato() << " -> ";
        actual = actual->getSiguiente();
    }

    std::cout << "nullptr" << std::endl;
}
