/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enmanuel Vegas 
 * @date nov.2022
 * @brief This file declares the functions of the parent folder program.
 *
 */
#include <iostream>
#include <string>

#ifndef BOX_H
#define BOX_H

class Box {
 public:
  Box(const int length = 1, const int breadth = 1, const int height = 1);
  friend std::ostream& operator<<(std::ostream& out, const Box& caja);
  friend std::istream& operator>>(std::istream& in, Box& caja);
  const int length() const { return length_;}
  const int breadth() const { return breadth_; }
  const int height() const { return height_;} 
 private:
  int length_;
  int breadth_;
  int height_;
};

#endif