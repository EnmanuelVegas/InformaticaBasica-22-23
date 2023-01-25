
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

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber);
int CaptarEntradaDelUsuario();
int CalculoDeSuma(int numero_natural); 
void ImprimirResultado(int entero_a_imprimir);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int numero_natural{CaptarEntradaDelUsuario()};
  int resultado{CalculoDeSuma(numero_natural)};
  ImprimirResultado(resultado);   
  return 0;
}
int CaptarEntradaDelUsuario() {
  int numero_natural;
  std::cin >> numero_natural;
  return numero_natural;
}
int CalculoDeSuma(int numero_natural) { 
  int suma_de_digitos{0};
  while (numero_natural != 0) {
    int digito = numero_natural % 10;
    numero_natural /= 10;
    suma_de_digitos += digito;
  }    
  return suma_de_digitos;
}
void ImprimirResultado(int entero_a_imprimir) {
  std::cout << entero_a_imprimir << std::endl;
} 
void PrintProgramPurpose() {
  std::cout << "Suma los dígitos de un número dado." << std::endl;
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
