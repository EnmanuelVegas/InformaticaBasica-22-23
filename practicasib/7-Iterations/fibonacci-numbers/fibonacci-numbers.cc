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
int ObtenerNumeroFinal();
void ImprimirPrimerosDosTerminos(int primer_termino, int segundo_termino);
int CalculoSerieFibonacci(int primer_termino, int segundo_termino, int
    termino_actual, int numero_final);

int main (int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int primer_termino{0}, segundo_termino{1}, termino_actual{0};
  int numero_final{ObtenerNumeroFinal()};
  ImprimirPrimerosDosTerminos(primer_termino, segundo_termino);
  CalculoSerieFibonacci(primer_termino, segundo_termino, termino_actual,
  numero_final);
  std::cout << std::endl;
  return 0;
}
int ObtenerNumeroFinal() {
  int numero_final;
  std::cin >> numero_final;
  return numero_final;
}
void ImprimirPrimerosDosTerminos(int primer_termino, int segundo_termino) {
  std::cout << primer_termino << " " << segundo_termino << " ";
}
int CalculoSerieFibonacci(int primer_termino, int segundo_termino, int termino_actual,
    int numero_final) {
  for (int i{3}; i <= numero_final; ++i) {
    termino_actual = primer_termino + segundo_termino;
    std::cout << termino_actual << " ";
    primer_termino = segundo_termino;
    segundo_termino = termino_actual;
  }
  return termino_actual;
}
void PrintProgramPurpose() {
  std::cout << "Imprime los N primeros números de la serie Fibonacci." << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
     std::cout << std::endl << "Este programa ha sido ejecutado con un numero incorrecto de ";
     std::cout << "parámetros." << std::endl << std::endl;
     std::cout << "Este programa debería ser llamado " << argv[0] << ". Sin ";
     std::cout << "parámetros." << std::endl << std::endl;
     return false;
  }
  return true;
}
