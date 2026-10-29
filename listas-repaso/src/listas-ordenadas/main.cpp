#include <iostream>
#include "ListaOrdenada.h"

int main() {
    ListaOrdenada lista;

    lista.insertar(20);
    lista.mostrar();

    lista.insertar(10);
    lista.mostrar();

    lista.insertar(30);
    lista.mostrar();

    lista.insertar(5);
    lista.mostrar();

    lista.insertar(25);
    lista.mostrar();

    std::cout << lista.eliminar(8) << std::endl;
    lista.mostrar();

    std::cout << lista.eliminar(10) << std::endl;
    lista.mostrar();

    return 0;
}
