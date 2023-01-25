
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
//#include <cstdlib>
#include <string>

int main() {
  std::string numero;
  std::cin >> numero;
  std::string numero1{numero[4]};
  int prueba = stoi(numero);
  // int numero2 = 
  std::cout << prueba + prueba;
   

  return 0;
}
