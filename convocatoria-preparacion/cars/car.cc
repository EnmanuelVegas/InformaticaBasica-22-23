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

#include "car.h"


 // REVISAR CONST
  //Car::Car() : model_{"indeterminado"}, plate_{"AAA"}, kilometers_{5} { }
  Car::Car(const std::string model, const std::string plate, const int kilometers)
      : model_{model}, plate_{plate}, kilometers_{kilometers} { } 

std::ostream& operator<<(std::ostream& out, const Car& car) {
  out << "tiene modelo" << car.model() << ", de placa " << car.plate();
  out << " y " << car.kilometers() << " kilometros." << '\n';
  return out;
}

std::istream& operator>>(std::istream& in, Car& car) {
  in >> car.model_;
  in >> car.plate_;
  in >> car.kilometers_;
  return in;
}