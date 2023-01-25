
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief Write a program that reads a letter and prints it in lowercase if it
  * was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs.
  * @see https://jutge.org/problems/P98960_en
  */

#include <iostream>

int main() {
  char letter;
  std::cin >> letter;
  int asciivalue{static_cast<int>(letter)};
  if (asciivalue > 96) {
    std::cout << (static_cast<char>(65 + (asciivalue - 97))) << std::endl;
  } else if (asciivalue > 64) {
      std::cout << (static_cast<char>(97 + (asciivalue - 65))) << std::endl;
    } 
  return 0;
}
