
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
#include <cmath>

int main() {
  int number;
  std::cin >> number;
  for (int i{0}; i < number; ++i) {
  int calculo = pow (i, 3);
  std::cout << calculo << ",";
  }
  std::cout << number * number * number << std::endl;
  return 0;
}

