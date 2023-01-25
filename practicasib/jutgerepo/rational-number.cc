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

int MaximoComunDivisor(int numerador, int denominador) {
  if (denominador == 0) { 
    return numerador;
  } else {  
      return MaximoComunDivisor(denominador, numerador % denominador);
    }
}

void read_rational(int& numerador, int& denominador) {
  std::string racional_string, numerador_string{""}, denominador_string{""};
  std::cin >> racional_string;
  int posicion_separador{0};
  while (racional_string.at(posicion_separador) != '/') {
    numerador_string += racional_string.at(posicion_separador); 
    ++posicion_separador;
  }
  for (int i{posicion_separador + 1}; i < racional_string.size(); ++i) {
    denominador_string += racional_string.at(i);
  }
  numerador = stoi(numerador_string);
  denominador = stoi(denominador_string);    
  int maximo_comun_divisor = MaximoComunDivisor(numerador, denominador);
  numerador /= maximo_comun_divisor;
  denominador /= maximo_comun_divisor;
}
int main() {
  int numerador{0}, denominador{0};
  read_rational(numerador, denominador);
  std::cout << numerador << ' ' << denominador << std::endl;
  return 0;
}
