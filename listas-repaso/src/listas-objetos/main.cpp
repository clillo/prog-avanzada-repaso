#include <iostream>
#include "ListaSimple.h"
#include "Pelicula.h"

int main() {
    ListaSimple lista;

    lista.insertarFinal(Pelicula(2010, "Inception"));
    lista.mostrar();

    lista.insertarFinal(Pelicula(1999, "Matrix"));
    lista.mostrar();

    lista.insertarInicio(Pelicula(1972, "El Padrino"));
    lista.mostrar();

    lista.insertarFinal(Pelicula(2014, "Interstellar"));
    lista.mostrar();

    return 0;
}
