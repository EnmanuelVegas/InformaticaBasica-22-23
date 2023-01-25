/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Jan, 4 2022
 * @brief Robot Simulator
 * @See https://exercism.org/tracks/cpp/exercises/robot-simulator
 */

#include <iostream>
#include <string>
#include "robot_class.h"

/**
 * Sobrecarga del operador unario "++" para la enumeración "Bearing"
 * @param enumeración de tipo Bearing
 * @return nueva enumeración correspondiente a Bearing, dependiendo del nuevo
 * valor asignado
 */
Bearing& operator++(Bearing& bearing) {//, int) {
  if (bearing == Bearing::WEST) {
    return bearing = Bearing::NORTH;
  }
  int new_bearing{(int)bearing};
  return bearing = static_cast<Bearing>(++new_bearing);
}

/**
 * Sobrecarga del operador unario "--" para la enumeración "Bearing"
 * @param enumeración de tipo Bearing
 * @return nueva enumeración correspondiente a Bearing, dependiendo del nuevo
 * valor asignado
 */
Bearing& operator--(Bearing& bearing) { //, int) {
  if (bearing == Bearing::NORTH) {
    return bearing = Bearing::WEST;
  }
  int new_bearing{(int)bearing};
  return bearing = static_cast<Bearing>(--new_bearing);
}

/**
 * Ejecución de las instrucciones aportadas por el usuario
 * @param string correspondiente a las instrucciones del usuario
 */
void Robot::execute_sequence (const std::string sequence) {
  for (const auto& instruction : sequence) {
    switch (instruction) {
      case 'R':
        turn_right();
        break;
      case 'A':
        advance();
        break;
      case 'L':
        turn_left();
        break;
      default:
        break;     
    }
  }
}

/**
 * Gira al robot de orientación hacia la derecha de su orientación actual
 */
void Robot::turn_right() {
    ++bearing_;
}

/**
 * Gira al robot de orientación hacia la izquierda de su orientación actual
 */
void Robot::turn_left() {
    --bearing_;
}

/**
 * Mueve al robot una "casilla" hacia adelante, dependiendo de su orientación
 */
void Robot::advance() {
  switch (bearing_) {
    case Bearing::NORTH:
      ++position_.second;
      break;
    case Bearing::SOUTH:
      --position_.second;
      break;
    case Bearing::WEST:
      --position_.first;
      break;
    case Bearing::EAST:
      ++position_.first;
      break;    
  }
}