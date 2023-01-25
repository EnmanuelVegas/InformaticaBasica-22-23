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
#include "circulo_class.h"

// Constructor aquí:
Circulo::Circulo(double radio = 1.00, double centro_coordenada_x = 1.00, double centro_coordenada_y = 1.00,
                Circulo::Color color = static_cast<Circulo::Color>(0)) {
  radio_ = radio;
  centro_x_ = centro_coordenada_x;
  centro_y_ = centro_coordenada_y;
  color_ = color;
}
double Circulo::Area() {
    const double KPi{3.141519};
    return (radio_ * radio_ * KPi);
}
double Circulo::Perimetro() {
    const double KPi{3.141519};
    return (radio_ * 2 * KPi);
}
void Circulo::ImprimirCaracteristicas() {
    std::cout << "Radio del círculo " << radio_ << '\n';
    std::cout << "Centro del circulo: (" << centro_x_ << ", " << centro_y_ << ")\n";
    std::cout << "Área del círculo: " <<  Area() <<  " unidades.\n";
    std::cout << "Perímetro del círculo: " << Perimetro() << " unidades.\n";
    std::cout << "Color del circulo: ";
    switch (static_cast<int>(color_)) {
      case 0:
        std::cout << "Rojo.";
        break;
      case 1:
        std::cout << "Azul.";
        break;
      case 2:
        std::cout << "Verde.";
        break;
      case 3:
        std::cout << "Amarillo.";
        break;
    }
    std::cout << std::endl;
}
bool Circulo::EsInterior(const double& coordenada_x, const double& coordenada_y) {
  double distancia{(coordenada_x - centro_x_) * (coordenada_x - centro_x_) + 
  (coordenada_y - centro_y_) * (coordenada_y - centro_y_)};
  if ((distancia <= radio_ * radio_)) {
    return true;
  }
  else {
    return false;
  }
}