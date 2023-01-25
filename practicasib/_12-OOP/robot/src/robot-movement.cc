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
#include <string>
#include <utility>

#include "robot_class.h"

int main(int argc, char* argv[]) {
  int x_coordenate{0}, y_coordenate{0};
  if (argc == 3) {
    std::string x_coordenate_string{argv[1]}, y_coordenate_string{argv[2]};//, bearing {argv[3]};
    x_coordenate = stoi(x_coordenate_string);
    y_coordenate = stoi(y_coordenate_string);
  }
  std::pair<int, int> position{x_coordenate, y_coordenate};
  Robot robot{position, Bearing::NORTH};
  std::pair<int, int> accesible_position{robot.position()};
  std::cout << "Posición inicial del robot: (" << accesible_position.first << ", "; 
  std::cout << accesible_position.second << ")" << "\n\n";
  std::cout << "Introduzca la serie de instrucciones: \n";
  std::string sequence;
  std::getline(std::cin, sequence);
  robot.execute_sequence(sequence);
  std::cout << '\n';
  accesible_position = robot.position();
  std::cout << "Posición final del robot: (" << accesible_position.first << ", ";
  std::cout << accesible_position.second << ")" << '\n';
  return 0;
}