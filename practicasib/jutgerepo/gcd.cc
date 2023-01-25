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
#include <algorithm>

int Calculo(int primer_numero, int segundo_numero) {
  if (segundo_numero == 0) {
    return primer_numero;
  } else {
      return Calculo(segundo_numero, primer_numero % segundo_numero);
    }
}
int main() {
  int primer_numero{0}, segundo_numero{0};
  std::cin >> primer_numero >> segundo_numero;
  std::cout << "The gcd of " << primer_numero << " and " << segundo_numero <<
  " is " << Calculo(primer_numero, segundo_numero) << "." << '\n'; 
  return 0;
}
