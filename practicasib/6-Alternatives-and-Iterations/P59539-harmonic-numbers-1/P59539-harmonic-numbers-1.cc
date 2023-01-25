
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief Write a program that reads a number n and prints the n-th harmonic
  * number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n. 
  * @bug There are no known bugs.
  * @see https://jutge.org/problems/P59539_en
  */

#include <iostream>
#include <iomanip>

int main() {
  int numero_a_calcular;
  double suma_harmonica{0.0};
  std::cin >> numero_a_calcular;
  for (int i = 1; i <= numero_a_calcular; i++) {
    suma_harmonica += (1.0 / i);
  }
  std::cout << std::fixed << std::setprecision(4) << suma_harmonica << '\n';

  return 0;
}

