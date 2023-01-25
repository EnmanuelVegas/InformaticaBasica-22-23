
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

bool is_perfect(int numero);

int main () {
  int numero;
  while (std::cin >> numero) { 
    std::cout << (is_perfect(numero) ? "true" : "false") << std::endl;
  }
}

bool is_perfect(int numero) {
  int suma_de_divisores{0};
  for (int posible_divisor{1}; posible_divisor < numero; ++posible_divisor) {
    if (numero % posible_divisor == 0) {
      suma_de_divisores += posible_divisor;
    }
  }
  if (suma_de_divisores == numero) {
    return true;
  } else {
    return false;
  }
}


