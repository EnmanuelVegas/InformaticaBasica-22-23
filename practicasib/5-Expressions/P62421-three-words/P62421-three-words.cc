
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief El programa lee las palabras insertadas y las imprime en orden inverso 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <string>

int main() {
  std::string primerapalabra;
  std::string segundapalabra;
  std::string tercerapalabra;
  std::cin >> primerapalabra >> segundapalabra >> tercerapalabra;
  std::cout << tercerapalabra << " " << segundapalabra << " " << primerapalabra
  << std::endl; 

  return 0;
}

