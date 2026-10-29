#include "Nodo.h"

Nodo::Nodo(Pelicula pelicula) : pelicula(pelicula), siguiente(nullptr) {}

Pelicula Nodo::getPelicula() const {
    return pelicula;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
    this->siguiente = siguiente;
}
