
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


//https://stackoverflow.com/questions/34361669/error-cannot-convert-stdbasic-stringchariterator-to-const-char-fo

#include <iostream>
#include <string>
#include <algorithm>
/**
 * Determina si la cadena aportada es palíndroma o no.
 *
 * @param cadena a estudiar.
 * @return valor booleano que determina si la cadena es palindroma o no. 
 **/
bool is_palindrome(const std::string& cadena_a_estudiar) {
  for (int i{0}; i < cadena_a_estudiar.size() / 2; i++) {
    if (cadena_a_estudiar.at(i) != cadena_a_estudiar.at(cadena_a_estudiar.size() - i - 1)) {
    return false;
    } else {
        return true;
        }
  }
  return true;
}
int main() {
  std::string cadena_a_estudiar;
  while (std::cin >> cadena_a_estudiar) {
  std::cout << is_palindrome(cadena_a_estudiar) << std::endl;
  } 
  
  return 0;
}
