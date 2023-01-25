
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
  std::string numero;
  std::cin >> numero;
  for (int contador = numero.size()-1; contador >= 0; --contador) {
    std::cout << numero.at(contador); 
  }  
  std::cout << '\n';
  return 0;
}

