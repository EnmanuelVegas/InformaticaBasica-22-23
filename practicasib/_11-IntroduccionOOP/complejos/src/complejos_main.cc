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
#include "complejo_class.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    exit (1);
  }
  std::string real_1{argv[1]}, imaginaria_1{argv[2]}, real_2{argv[3]},
  imaginaria_2{argv[4]};
  double primer_numero_real{stod(real_1)}, primer_numero_imaginario{stod(imaginaria_1)}, 
  segundo_numero_real{stod(real_2)}, segundo_numero_imaginario{stod(imaginaria_2)};
  Complejo complejo1{primer_numero_real, primer_numero_imaginario};
  Complejo complejo2{segundo_numero_real, segundo_numero_imaginario};
  std::cout << "Los números complejos introducidos son:\n";
  std::cout << complejo1 << complejo2;
  Complejo resultado{complejo1 + complejo2};
  std::cout <<  "La suma de los complejos es: " << resultado;
  resultado = complejo1 - complejo2;
  std::cout << "La resta de los complejos es: " << resultado;
  return 0;
}