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

int factorial (int limite);

int main() {  
    int x;
    while (std::cin >> x) {
        std::cout << factorial(x) << std::endl;
    }
  return 0;
}


int factorial (int limite) {

  int factorial;
  if (limite == 0) {
  return 1;
  } else { 
      int limite_anterior{1};
      for (int i{1}; i <= limite; ++i) {
        factorial = i * limite_anterior;
        limite_anterior = factorial;
      }
    } 
  return factorial;
} 




