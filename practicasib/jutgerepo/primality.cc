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
#include <vector>
#include <cmath>

bool Primality(int numero_primo) {
  if (numero_primo <= 1) {
    return false;
  }
  for (int j{2}; j <= sqrt(numero_primo) && j != numero_primo; j++) {
    if (numero_primo % j == 0) {
      return false; 
    }
  }
  return true; 
}
int main() {
  int vector_size, numero; //vector no es necesario para realizar este problema.
  std::cin >> vector_size;
  std::vector<int> numeros_primos(vector_size); 
  for (int i{0}; i <= vector_size - 1; i++) {
    std::cin >> numero;
    numeros_primos[i] = numero;
  }
  for (int i{0}; i <= vector_size - 1 ; i++) {
    if (Primality(numeros_primos[i])) {
      std::cout << numeros_primos[i] << " is prime";
    }
    else {
      std::cout << numeros_primos[i] << " is not prime";
    }
    std::cout << std::endl;
  }
  return 0;
}