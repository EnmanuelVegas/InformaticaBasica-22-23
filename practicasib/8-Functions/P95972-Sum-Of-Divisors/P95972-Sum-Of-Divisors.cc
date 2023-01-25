
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

int sum_divisors(int numero);
 
int main () {
  int numero;
  while (std::cin >> numero) {
    std::cout << sum_divisors(numero) << std::endl;
  }
  return 0;
}

int sum_divisors(int numero) {
  int resultado_de_la_suma{0};
  for (int posible_divisor{1}; posible_divisor <= numero; ++posible_divisor) {
    if ((numero % posible_divisor) == 0) {
      resultado_de_la_suma += posible_divisor;
    }
  }
  return resultado_de_la_suma;
}
  
