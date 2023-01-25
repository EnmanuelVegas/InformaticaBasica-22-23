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

void print(int s, char caracter, int numero) {
    for (int i{0}; i < s; i++) { 
      std::cout << ' ';
    }
    for (int i{0}; i < numero; i++) { 
      std::cout << caracter;
      std::cout << std::endl;
    }
}

void cross(int numero, char caracter) {
    for (int i{0}; i < numero; i++) {
      if (i == numero / 2) {
        print(0, caracter, numero);
      }
      else { 
        print (numero / 2 , caracter, 1);
      }
    }
}
int main () {
	cross(5,'X');
  return 0;
}
