
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

int number_of_digits(int numero);

int main() {
  int numero;
  while (std::cin >> numero) { 
    std::cout << number_of_digits(numero) << std::endl;
  }
  return 0;
}

int number_of_digits(int numero) {
  int contador{1};
  while (numero >= 10) {
    numero /= 10;
    ++contador;
  }
  return contador;
}
