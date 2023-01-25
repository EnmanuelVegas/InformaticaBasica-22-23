/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief EXAMEN CONVOCATORIA ENERO 2023. VERDADERO O FALSO. El programa imprime 
  * 0 1 2 3 ? 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <vector>

#include "examen.h"

int main() {
  int i{1};
  for (int i{0}; i < 3; ++i) {
    std::cout << i << " ";
  }
  std::cout << i << std::endl;
  return 0;
}