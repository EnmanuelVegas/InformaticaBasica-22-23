
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
  int numero;
  while (std::cin >> numero) {
    int suma_de_digitos{0};
    int numero_a_calcular{numero};
    while (numero_a_calcular != 0) {
      suma_de_digitos += numero_a_calcular % 10;
      numero_a_calcular /= 10;
    }
    std::cout << "The sum of the digits of " << numero << " is " 
    << suma_de_digitos << "." << std::endl;     
  }  
  return 0;
}

