/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <cmath>

unsigned long long int FactorialDesarrollado(const int factorial) {
  unsigned long long int resultado_factorial{1};
  for (int i{factorial}; i > 0; --i) {
    resultado_factorial *= i;
  }
  return resultado_factorial;
}

int FactorialNecesario(const int numero_de_ceros) {
  int factorial_necesario{1};
  unsigned long long int factorial_resultado{1};
  const int divisor_base_diez{pow(10, numero_de_ceros)};
  while (true) {
    //std::cout << factorial_resultado << " " << factorial_necesario << '\n';
    factorial_resultado = FactorialDesarrollado(factorial_necesario);
    if ((factorial_resultado % divisor_base_diez) == 0) {
      return factorial_necesario;    
    }
    ++factorial_necesario;
  }
}

int main() {
  int numero_de_ceros{0};
  while(std::cin >> numero_de_ceros) {
  std::cout << FactorialNecesario(numero_de_ceros) << '\n';
  }
  return 0;
}