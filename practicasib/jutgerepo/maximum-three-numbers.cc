
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
  
  int first_number;
  int second_number;
  int third_number; 
  std::cin >> first_number >> second_number >> third_number;
  std::cout << std::max(first_number,(std::max(second_number,third_number))) << std::endl; 

 /* if (first_number > second_number && first_number > third_number) {
  std::cout << first_number << std::endl;
} else if (second_number > first_number && second_number > third_number) {
  std::cout << second_number << std::endl;
} else if (third_number > first_number && third_number > second_number) {
  std::cout << third_number << std::endl;  
} else if (first_number == second_number && first_number > third_number) {
  std::cout << first_number << std::endl;
} else if (second_number == third_number && second_number > first_number) {
  std::cout << second_number << std::endl;
} else if (third_number == first_number && third_number > second_number) {
  std::cout << third_number << std::endl;  
} else if (first_number == second_number && second_number == third_number) {
  std::cout << first_number << std::endl;
} */
  return 0;
}

