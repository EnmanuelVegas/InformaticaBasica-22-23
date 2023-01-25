
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

int main() {

  int numero, reverse{0}, remainder;
  std::cin >> numero;
  while (numero != 0) {
    remainder = numero % 10;
    reverse = reverse * 10 + remainder;
    numero /= 10;
  }

  std::cout << reverse << std::endl;

  return 0;
}
