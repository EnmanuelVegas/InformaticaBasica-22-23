
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

	int numero;
    std::cin >> numero;
    while(numero > 15) {
        int temporal = numero % 16;
        numero /= 16;
        if (temporal >= 10) std::cout << (char)(temporal+'A'-10);
        else std::cout << temporal;
    }
    if (numero >= 10) cout << (char)(n+'A'-10) << endl;
    else cout << n << endl;
}  

  return 0;
}

