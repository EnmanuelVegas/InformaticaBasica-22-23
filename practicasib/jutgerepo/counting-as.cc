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

int ContarAs();

int main() {
  std::cout << ContarAs() << std::endl;
  return 0;
}

int ContarAs() {
  char caracteres_a_estudiar;
  int contador_de_a;
  while (caracteres_a_estudiar != '.') {
    std::cin >> caracteres_a_estudiar;
    if (caracteres_a_estudiar == 'a') {
      ++contador_de_a;
    }
  }
  return contador_de_a;
}
