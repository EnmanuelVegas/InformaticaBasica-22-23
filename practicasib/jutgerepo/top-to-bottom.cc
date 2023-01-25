
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
  int primer_numero;
  int segundo_numero;
  std::cin >> primer_numero >> segundo_numero;
  if (primer_numero > segundo_numero) {
    for (primer_numero; primer_numero >= segundo_numero; primer_numero--) {
      std::cout << primer_numero << std::endl;
    }
  } else if (primer_numero < segundo_numero) {
      while (primer_numero <= segundo_numero) {
        std::cout << segundo_numero << std::endl;
        segundo_numero--;
      }
    } else {
         std::cout << segundo_numero << std::endl; 
      }

/*else if (primer_numero < segundo_numero) {
      for (segundo_numero; segundo_numero >= primer_numero; segundo_numero--) {
        std::cout << segundo_numero << std::endl;
      }
    } else {
         std::cout << segundo_numero << std::endl; */ 
  return 0;
}

