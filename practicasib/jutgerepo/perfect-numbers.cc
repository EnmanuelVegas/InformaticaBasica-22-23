/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>

bool is_perfect(int numero) {
  int suma{0};
  if (numero == 0) {
    return false;
  }
  for (int i{1}; i < numero; ++i) {
    if (numero % i == 0) {
      suma += i;
    }
  }
  if (suma != numero) {
    return false;
  }
  return true;
}

int main() {
  int numero{0};
  while (std::cin >> numero) {
    if (is_perfect(numero)) {
      std::cout << "true\n";
    }
    else {
      std::cout << "false\n";
    }
  }
  return 0;
}