
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


/* int Calculo(a_multiplicar) {
  calculo = number * Cal */
 
int main() {
  int number;
  std::cin >> number;
  int i{1};
  while (i <= 10) {
  int calculo = number * i;
  std::cout << number << "*" << i << " = "<< calculo << std::endl;
  ++i;
  }

  return 0;
}

