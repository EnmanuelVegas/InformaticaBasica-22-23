
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

std::string TransformarLetras(std::string cadena) {
  for (int i{0}; i <= cadena.size() - 1; ++i) {
    char caracter = cadena.at(i);
    int caracter_numero = (int)caracter;
    if (caracter_numero > 64 && caracter_numero < 91) {
      std::cout << static_cast<char>(caracter_numero + 32);
    } else if (caracter_numero > 96 && caracter_numero < 123) {
        std::cout << static_cast<char>(caracter_numero - 32);
      } else {
          std::cout << caracter;
        }
  }
  return cadena;
}
