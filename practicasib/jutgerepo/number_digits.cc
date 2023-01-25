
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
  std::cout << "The number of digits of " << numero << " is " << numero.length() <<
  "." << std::endl;  
  
  return 0;
}

