
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
  int number_of_seconds;
  std::cin >> number_of_seconds;
  int hours{number_of_seconds / 3600};
  int minutes{(((number_of_seconds) - (hours * 3600)) / 60)};
  int seconds{number_of_seconds - ((hours * 3600) + (minutes * 60))};
  std::cout << hours << " " << minutes << " " << seconds << std::endl;  
  
  return 0;
}

