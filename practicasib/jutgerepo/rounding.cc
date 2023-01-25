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

int Suelo(int number) {
  std::cout << number << " ";
  return 0;
}
int Techo(double number) {
  int number_int = number; 
  if ((number - number_int) > 0) {
    std::cout << ++number_int << " ";
  } else {
      std::cout << number_int << " ";
    }  
  return 0;
}
int Aproximacion(double number) {
  int number_int = number; 
  if ((number - number_int) >= 0.5) {
    std::cout << ++number_int << std::endl;
  } else {
      std::cout << number_int << std::endl;  
    }
  return 0;
}
int main() {
  double number;
  std::cin >> number;
  Suelo(number);
  Techo(number);
  Aproximacion(number);
  return 0;
}


