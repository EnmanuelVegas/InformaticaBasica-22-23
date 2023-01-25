
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
  char directrices;
  int coordenada_este_oeste{0};  
  int coordenada_norte_sur{0};  
  while (std::cin >> directrices) {
    if (directrices == 'n') {
      --coordenada_norte_sur;
    } else if (directrices == 's') {
        ++coordenada_norte_sur;
      } else if (directrices == 'e') {
          ++coordenada_este_oeste;
        } else if (directrices == 'w') {
            --coordenada_este_oeste;
          }
  }
  std::cout << "(" << coordenada_este_oeste << ", " << coordenada_norte_sur <<
  ")" << std::endl; 
  return 0;
}

