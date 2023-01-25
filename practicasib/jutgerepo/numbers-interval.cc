
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
  
  int extremo_inferior;
  int extremo_superior;
  std::cin >> extremo_inferior >> extremo_superior;
  for (int i{extremo_inferior}; i < extremo_superior; i++) {
    std::cout << i << ",";
  }  
  if (extremo_inferior <= extremo_superior) { 
    std::cout << extremo_superior;
  } 
  std::cout << std::endl;

  /* if (extremo_inferior = extremo_superior) { 
      std::cout << extremo_superior << std:: endl;
    } else if (extremo_inferior > extremo_superior) { 
        std::cout; } */

  return 0;
}

