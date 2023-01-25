
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
  int number;
  std::cin >> number;
  int contador{0};
  while (contador <= number) {
    std::cout << contador << std::endl;
    ++contador;
  }
  return 0;
}

