
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <iomanip>

int main() {
  double entrada;
  double suma_total{0.0};
  int numero_de_entradas{0};
  while (std::cin >> entrada) {
    suma_total += entrada;
    numero_de_entradas++;
  }
  std::cout << std::fixed << std::setprecision(2) << suma_total / numero_de_entradas
  << std::endl;

  return 0;
}

