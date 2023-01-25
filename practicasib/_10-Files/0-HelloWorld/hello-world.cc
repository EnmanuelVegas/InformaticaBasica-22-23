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
#include <vector>

int main() {
  std::vector<std::string> msg{"Hello ", "C++ ", "World ", "from ", "VS Code ", "and the C++ extension."};
  for (auto& value : msg) { 
    std::cout << value;
  }
  std::cout << std::endl;
  return 0;
} 