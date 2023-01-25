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
#include <cmath>

#include "function-example.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {
    return 1;
  }  
  std::string string_x, string_y, string_t;
  string_x = argv[1];
  string_y = argv[2];
  string_t = argv[3];
  double valor_x, valor_y, valor_t;
  valor_x = stod(string_x);
  valor_y = stod(string_y);
  valor_t = stod(string_t);
  CalculoDeLaFuncion(valor_x, valor_y, valor_t);
  return 0;
}
