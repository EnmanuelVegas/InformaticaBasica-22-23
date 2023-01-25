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

//Declaración de la enumeración Bearing
enum class Bearing {
  NORTH,
  SOUTH,
  EAST,
  WEST
};

//Declaración de la clase Robot
class Robot {
 public:
  Robot() : position_{0, 0}, bearing_{Bearing::NORTH} { }
  Robot(std::pair<int, int> position, Bearing bearing)
    : position_{position}, bearing_{bearing} { }
  int coordenada_x() const { return position_.first; }
  int coordenada_y() const { return position_.second; }
  std::pair<int, int> position() const { return position_; }
  int orientacion() const { return static_cast<int>(bearing_);}
  Bearing bearing() const { return bearing_; }
  /**
 * Ejecución de los movimientos aportadas por el usuario
 * @param char correspondiente a cada uno de los movimientos del usuario
 */
  void MovementsOnTheGround(char movement) {
    switch (movement) {
      case 'n':
        --position_.first;
        break;
      case 's':
        ++position_.first;
        break;
      case 'e':
        ++position_.second;
        break;
      case 'w':
        --position_.second;
        break;
    }
  }
 private:
  std::pair<int, int> position_;
  Bearing bearing_;
};

int main(int argc, char* argv[]) {
  const std::pair<int, int> kPosition{2, 3};
  //int coordenada_x{5}, coordenada_y{6}, bearing;
  //std::pair<int, int> coordenadas{coordenada_x, coordenada_y};
  Bearing kBearing {Bearing::SOUTH};
  //Robot robot{kPosition, kBearing};
  Robot robot;
  std::string movements;
  //while(std::cin >> movement) {
  getline(std::cin, movements);
  for (const auto& movement : movements) {
    robot.MovementsOnTheGround(movement);
  }
  std::cout << "(" << robot.coordenada_y() << ", " << robot.coordenada_x() << ")";
  std::cout << '\n';
  return 0;
}