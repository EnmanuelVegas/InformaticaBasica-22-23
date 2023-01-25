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

void print(int spaces, char character, int character_repetition) {
  for (int i{1}; i <= spaces; ++i) {
    std::cout << " ";
  }
  for (int i{1}; i <= character_repetition; ++i) {
    std::cout << character; 
  }
  std::cout << std::endl;
}
int main() {
int s, n;
char c;
std::cin >> s >> c >> n;
print (s, c, n);
  return 0;
}
