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

#include "change-case-tools.h"
  
int main() {
  std::string cadena;
  std::cin >> cadena;
  std::string cadena_transformada{TransformarLetras(cadena)};
  std::cout << std::endl;
  return 0;
}
