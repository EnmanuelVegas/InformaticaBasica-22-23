
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

int main() {
  int numero_a_sumar;
  int suma_total{0};
  int calculo;
  std::cin >> numero_a_sumar;
  for (int i = 1; i <= numero_a_sumar; i++) {
    calculo = i * i;
    suma_total += calculo;
  }  
  std::cout << suma_total << std::endl;
  return 0;
}

