
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
int ObtenerInput();
int CalculoGregoriano(int anualidad_a_estudiar);

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int anualidad{ObtenerInput()};
  CalculoGregoriano(anualidad);
  return 0;
}
int ObtenerInput() {
  std::cout << "Escriba el año a estudiar" << std::endl;
  int anualidad_a_estudiar;
  std::cin >> anualidad_a_estudiar;
  return anualidad_a_estudiar;
}
int CalculoGregoriano(int anualidad) {
  if ((anualidad % 4 == 0 && anualidad % 100 != 0) || anualidad % 400 == 0) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
  return 0;
} 
void PrintProgramPurpose() {
  std::cout << "Determina si un número es bisiesto o no." << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
     std::cout << "Este programa ha sido ejecutado con un numero incorrecto de ";
     std::cout << "parámetros." << std::endl;
     std::cout << "Este programa debería ser llamado " << argv[0] << ". Sin ";
     std::cout << "parámetros." << std::endl;
     return false;
  }
  return true;
}
