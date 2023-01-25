/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <cmath>

bool DeterminarPrimo(int numero) {
  if (numero == 1 || numero == 0) {
    return false;
  }
  for (int i{2}; i <= sqrt(numero) /*&& i != numero*/; i++) {
    if (numero % i == 0) {
      return false; 
    }
  }
  return true; 
  }

bool is_perfect_prime(int numero) {
  int numero_primo_actual{numero};  
  int numero_primo_anterior{0};
  while (numero_primo_actual != numero_primo_anterior) {
    //std::cout << "antes del if" << numero_primo_actual << " " << numero_primo_anterior << '\n';
    if (DeterminarPrimo(numero_primo_actual)) {
      numero_primo_anterior = numero_primo_actual;
      //std::cout << numero_primo_anterior << "anterior\n";
      int numero_primo_nuevo{0};
      while (numero_primo_actual != 0) {
        numero_primo_nuevo += (numero_primo_actual % 10);
        //std::cout << (numero_primo_actual % 10) << '\n';
        numero_primo_actual = (numero_primo_actual / 10);
        //std::cout << numero_primo_actual << '\n';
      }
      numero_primo_actual = numero_primo_nuevo; 
    }
    else {
      return 0;
    }
  }
  return 1;
}

int main() {
  int numero;
  while (std::cin >> numero) {
    if (numero != 0) {
      if (is_perfect_prime(numero)) {
      std::cout << "yes\n";
      }
      else {
        std::cout << "no\n";
      }
    }
    else {
      return 0;
    }
  }
  return 0;
}