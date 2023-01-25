/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Jan, 4 2022
 * @brief Robot class
 * @See https://exercism.org/tracks/cpp/exercises/robot-simulator
 */

#ifndef ROBOT_CLASS_H
#define ROBOT_CLASS_H

#include <iostream>   // std::cout
#include <string>     // std::string
#include <utility>    // std::pair

enum class Bearing { 
  NORTH, 
  EAST,
  SOUTH, 
  WEST
};

// Declaración de la clase Robot
class Robot {
 public:
  Robot() : position_{0, 0}, bearing_{Bearing::NORTH} {
    std::cout << "Ejecutado el Constructor sin parámetros" << std::endl;
  }
  Robot(std::pair<int, int> position, Bearing bearing) 
    : position_{position}, bearing_{bearing}  {
    std::cout << "Ejecutado el Constructor con parámetros" << std::endl;
  }
  std::pair<int, int> position() const { return position_; }
  Bearing bearing() const { return bearing_; }
  void execute_sequence(std::string sequence);
  void turn_right();
  void turn_left();
  void advance();
 private:
  std::pair<int, int> position_;
  Bearing bearing_;
};

#endif // ROBOT_CLASS_H