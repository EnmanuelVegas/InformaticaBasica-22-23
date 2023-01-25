
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
#include <string>

int main() {
  std::string primera_palabra;
  std::string segunda_palabra;
  std::cin >> primera_palabra >> segunda_palabra;
  if (primera_palabra < segunda_palabra) {
    std::cout << primera_palabra << " < " << segunda_palabra << '\n';
  } else if (primera_palabra > segunda_palabra) {
      std::cout << primera_palabra << " > " << segunda_palabra << '\n';
    } else /*if (primera_palabra = segunda_palabra) */  {
        std::cout << primera_palabra << " = " << segunda_palabra << '\n';
      }   

  return 0;
}

