
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

int Computodemonedas(int filas, int columnas);

int main() {
  int filas, columnas;
  std::cin >> filas >> columnas;
  std::cout << Computodemonedas(filas, columnas); 

  return 0;
}

int Computodemonedas(int filas, int columnas) {
  char monedas;
  int resultado{0};
  for (int i{0}; i < filas * columnas; i++) {
    std::cin >> monedas;
    resultado += (int)monedas - '0';
  }
  return resultado;
}
