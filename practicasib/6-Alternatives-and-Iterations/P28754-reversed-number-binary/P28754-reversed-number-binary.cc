
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

int main () {
  int numero_a_invertir;
  std::cin >> numero_a_invertir;
  while (numero_a_invertir > 1) {
    std::cout << numero_a_invertir % 2;
    numero_a_invertir /= 2;
  }
  if (numero_a_invertir == 0) {
    std::cout << 0 << std::endl;
  } else 
    {
      std::cout << 1 << std::endl;
    }
  return 0;
}
