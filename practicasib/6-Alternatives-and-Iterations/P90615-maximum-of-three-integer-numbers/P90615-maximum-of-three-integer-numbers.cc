
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
  int first_number;
  int second_number;
  int third_number; 
  std::cin >> first_number >> second_number >> third_number;
  std::cout << std::max(first_number, (std::max(second_number, third_number))) << std::endl; 
  return 0;
}
