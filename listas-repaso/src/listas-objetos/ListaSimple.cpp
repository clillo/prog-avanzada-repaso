#include "ListaSimple.h"
#include <iostream>

ListaSimple::ListaSimple() {
    cabeza = nullptr;
}

bool ListaSimple::estaVacia() const {
    return cabeza == nullptr;
}

void ListaSimple::insertarInicio(Pelicula pelicula) {
    Nodo* nuevo = new Nodo(pelicula);

    if (estaVacia()) {
        cabeza = nuevo;
        return;
    }

    Nodo* actual = cabeza;
    cabeza = nuevo;
    cabeza->setSiguiente(actual);
}

void ListaSimple::insertarFinal(Pelicula pelicula) {
    Nodo* nuevo = new Nodo(pelicula);

    if (estaVacia()) {
        cabeza = nuevo;
        return;
    }

    Nodo* actual = cabeza;

    while (actual->getSiguiente() != nullptr) {
        actual = actual->getSiguiente();
    }

    actual->setSiguiente(nuevo);
}

bool ListaSimple::eliminar(const std::string& titulo) {
    if (cabeza == nullptr) return false;

    if (cabeza->getPelicula().getTitulo() == titulo) {
        Nodo* borrar = cabeza;
        cabeza = cabeza->getSiguiente();
        delete borrar;
        return true;
    }

    Nodo* anterior = cabeza;
    Nodo* actual = cabeza->getSiguiente();

    while (actual != nullptr && actual->getPelicula().getTitulo() != titulo) {
        anterior = actual;
        actual = actual->getSiguiente();
    }

    if (actual == nullptr) return false;

    anterior->setSiguiente(actual->getSiguiente());
    delete actual;
    return true;
}

void ListaSimple::mostrar() const {
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        Pelicula p = actual->getPelicula();
        std::cout << "[" << p.getAño() << "] " << p.getTitulo() << " -> ";
        actual = actual->getSiguiente();
    }

    std::cout << "nullptr" << std::endl;
}
