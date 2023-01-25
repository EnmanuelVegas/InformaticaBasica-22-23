/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief EXAMEN CONVOCATORIA ENERO 2023. Escriba un programa que calcule los factores
  * de un numero y los incluya en un vector. Ya la función Main viene dada y solo había que
  * programar la función NumerosPrimos(int numero) 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <vector>

#include "examen.h"


std::vector<int> NumerosPrimos(int numero) {
  std::vector<int> factors;
  factors.reserve(20);
  int posibles_numeros_primos{2};
  while (posibles_numeros_primos * posibles_numeros_primos <= numero) {
    if ((numero % posibles_numeros_primos) == 0) {
      factors.emplace_back(posibles_numeros_primos);
      numero /= posibles_numeros_primos;
    }
    ++posibles_numeros_primos;
  }
  if (numero > 1) {
    factors.emplace_back(numero);
  }
  return factors;
}


int main() {
  const int numero = 36;
  std::vector<int> factors = NumerosPrimos(numero);
  for (auto& factores : factors) {
    std::cout << factores << std::endl;
  }
  return 0;
}