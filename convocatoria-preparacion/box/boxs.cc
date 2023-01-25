/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>

#include "box.h"

bool operator==(const Box& box_primera, const Box& box_segunda) {
  if (box_primera.length() == box_segunda.length() && box_primera.breadth() == box_segunda.breadth()
      && box_primera.height() == box_segunda.height()) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  Box box_primera;
  Box box_segunda{5, 7, 0};
  std::cin >> box_primera; //>> box_segunda;
  //Car car_segundo {"MAZDA", "ZYW", 129};
  if (box_primera == box_segunda) {
    std::cout << "Ambas cajas son iguales" << '\n'; 
  }
  return 0;
}