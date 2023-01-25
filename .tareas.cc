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

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber);


int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  return 0;
}

void PrintProgramPurpose() {
  std::cout << "'\n'PRÓPOSITO. _______" << '\n''\n';
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
     std::cout << "Este programa ha sido ejecutado con un numero incorrecto de ";
                  "parámetros.'\n''\n'";
                  "Este programa debería ser llamado " << argv[0] << ". Sin ";
                  "parámetros.'\n''\n'";
     return false;
  }
  return true;
}
