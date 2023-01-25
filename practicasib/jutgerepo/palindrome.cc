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
#include <string>

bool is_palindrome(const std::string& palabra) {
  for (int i{0}; i < palabra.size() / 2; i++) {
    if (palabra[i] != palabra.at(palabra.size() - i - 1)) { 
      return false;
    }
  }
  return true;
}

int main () {
  std::string palabra;
  while (std::cin >> palabra) {
    std::cout << is_palindrome(palabra) << std::endl;
  }
  return 0;
}