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


 // REVISAR CONST
  //Car::Car() : model_{"indeterminado"}, plate_{"AAA"}, kilometers_{5} { }
Box::Box(const int length, const int breadth, const int height)
  : length_{length}, breadth_{breadth}, height_{height} { } 

std::ostream& operator<<(std::ostream& out, const Box& caja) {
  out << "(" << caja.length() << " " << caja.breadth() << " " << caja.height();
  out << '\n';
  return out; 
}

std::istream& operator>>(std::istream& in, Box& caja) {
  in >> caja.length_;
  in >> caja.breadth_;
  in >> caja.height_;
  return in;
}

