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

#ifndef CAR_H
#define CAR_H

class Car {
 public:
 // REVISAR CONST
  //Car();
  Car(const std::string model = "Indeterminado", const std::string plate = "Indeterminado", const int kilometers = 5);
  friend std::ostream& operator<<(std::ostream& out, const Car& car);
  friend std::istream& operator>>(std::istream& in, Car& car);
  const std::string model() const { return model_;}
  const std::string plate() const { return plate_; }
  const int kilometers() const { return kilometers_;} 
 private:
  std::string model_;
  std::string plate_;
  int kilometers_;
};

#endif