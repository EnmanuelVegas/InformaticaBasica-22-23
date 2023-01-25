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

void cross(int numero, char caracter) {
  for (int i{1}; i <= numero; ++i) { 
    if (i != ((numero / 2) + 1)) {
      for (int j{0}; j < (numero / 2); ++j) {
        std::cout << " ";
      }
      std::cout << caracter;
    }
    if (i == ((numero / 2) + 1)) {
      for (int j{1}; j <= numero; ++j) {
        std::cout << caracter; 
      }
    }
    std::cout << std::endl;
  }
}  
int main() {
  int numero;
  char caracter;
  // std::cin >> numero >> caracter; 
  cross(5, 'X');  
  return 0;
}