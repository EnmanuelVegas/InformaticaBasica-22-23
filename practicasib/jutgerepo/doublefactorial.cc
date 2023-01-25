
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

int double_factorial (int limite);

int main() {  
    int x;
   std::cin >> x;
        std::cout << double_factorial(x) << std::endl;
  return 0;
}
int double_factorial(int limite) {
  if (limite == 0) {
    return 1;
  } else {
      int contador{limite};
      int resultado{limite};
      while ((contador - 2) > 0) {
        resultado *= (contador - 2);
        contador -= 2;
      }
      return resultado;
   }
}
