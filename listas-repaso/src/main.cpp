#include <iostream>
#include <list>
#include <string>

int main() {
  std::list<std::string> temas{"nodos", "punteros", "insercion", "borrado", "recorrido"};

  std::cout << "Repaso de listas enlazadas / std::list\n";
  std::cout << "Temas:\n";
  for (const auto& tema : temas) {
    std::cout << "  - " << tema << '\n';
  }

  return 0;
}
