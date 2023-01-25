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
#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber);int ConseguirInput();
int CalculoBinario(int numero_binario);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int numero_a_convertir{ConseguirInput()};
  std::cout << CalculoBinario(numero_a_convertir) << std::endl;
  return 0;
}
int ConseguirInput() {
  std::cout << "Escriba el número a transformar en binario:" << std::endl;
  int numero_del_usuario;
  std::cin >> numero_del_usuario;
  return numero_del_usuario;
}
int CalculoBinario(int numero_binario) {
  int numero_decimal{0};
  int residuo{0};
  int exponente{0};
  while (numero_binario != 0) {
    residuo = numero_binario % 10;
    numero_binario /= 10;
    numero_decimal += residuo * pow (2, exponente);
    ++exponente;  
  }
  return numero_decimal;
}
void PrintProgramPurpose() {
  std::cout << "Este programa transforma un numero en binario a decimal." << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
     std::cout << "Este programa ha sido ejecutado con un numero incorrecto de ";
     std::cout << "parámetros." << std::endl << std::endl;
     std::cout << "Este programa debería ser llamado " << argv[0] << ". Sin ";
     std::cout << "parámetros." << std::endl;
     return false;
  }
  return true;
}
