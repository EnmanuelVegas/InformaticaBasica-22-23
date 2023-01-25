
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *:
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <cmath>

int ImprimirCalculoDePotencias(int base);

int main() {
  int base, exponente;
  while (std::cin >> base) {
  ImprimirCalculoDePotencias(base);
  }
  return 0;
}

int ImprimirCalculoDePotencias (int base) {
  int exponente;
  int potencia;
  int resultado = 1;
  std::cin >> exponente;
  for (int i = 0; i < exponente; ++i) {
    resultado *= base;
  }
  std::cout << resultado << std::endl;
  return 0;
}
