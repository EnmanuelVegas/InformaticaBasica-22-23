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

bool DeterminarBisiestoONo(int año) {
  if (año % 4 == 0) { 
    if (año % 100 != 0) {
      return true;
    } else if ((año / 100) % 4 == 0) {
        return true;
      } else {
          return false;
        }
  } else {
      return false;
    } 
}
int main() {
  int año;
  std::cin >> año;
  if ((DeterminarBisiestoONo(año)) == true) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  std::cout << std::endl;
  return 0;
}
