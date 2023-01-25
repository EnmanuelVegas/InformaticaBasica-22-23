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

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber);
double CalculoDeLaFuncion(double valor_x, double valor_y, double valor_t);

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

double CalculoDeLaFuncion(double valor_x, double valor_y, double valor_t) {
  double numerador, denominador; 
  double resultado_final;
  numerador = sqrt((2 * valor_t) - 4);
  denominador = pow(valor_x, 2) - pow(valor_y, 2);
  resultado_final = numerador / denominador;
  std::cout << resultado_final << std::endl;
  return 0;
}

void PrintProgramPurpose() {
  std::cout << std::endl << "Calcula el resultado de una función g(x, y, t)" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
     std::cout << "Este programa ha sido ejecutado con un numero incorrecto de ";
     std::cout << "parámetros." << std::endl << std::endl;
     std::cout << "Este programa debería ser invocado como " << argv[0] << ". Sin\
     parámetros." << std::endl << std::endl;
     return false;
  }
  return true;
}
