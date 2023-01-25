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

bool operator<(Car& primer_carro, Car& segundo_carro) {
  if (primer_carro.kilometers() < segundo_carro.kilometers()) {
    return 1;
  }
  else {
    return 0;
  }
}

bool operator>(Car& primer_carro, Car& segundo_carro) {
  if (primer_carro.kilometers() > segundo_carro.kilometers()) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  Car car_primero{"TOYOTA", "ABC", 100};
  Car car_segundo;
  std::cout << car_segundo;
  //std::cin >> car_segundo;
  //Car car_segundo {"MAZDA", "ZYW", 129};
  if (car_primero > car_segundo) {
    std::cout << "El coche con mayor kilometraje encontrado en el listado es el";
    std::cout << " coche que: " << car_primero << '\n'; 
  }
  else {
    if (car_primero < car_segundo) {
      std::cout << "El coche con mayor kilometraje encontrado en el listado es el";
      std::cout << " coche que: " << car_segundo << '\n';
    }
  }
  return 0;
}