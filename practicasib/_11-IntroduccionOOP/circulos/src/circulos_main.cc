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
#include "tools.h"


int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    exit (1);
  }
  std::string radio_cadena{argv[1]}, centro_cadena_x{argv[2]}, centro_cadena_y{argv[3]},
  color_cadena{argv[4]};
  double radio_circulo{stod(radio_cadena)}, centro_coordenada_x{stod(centro_cadena_x)}, 
  centro_coordenada_y{stod(centro_cadena_y)}; 
  int color_circulo{stoi(color_cadena)};
  Circulo::Color color{static_cast<Circulo::Color>(color_circulo)};
  Circulo mi_circulo{radio_circulo, centro_coordenada_x, centro_coordenada_y, color};
  std::cout << std::endl;
  mi_circulo.ImprimirCaracteristicas();
  std::string punto_coordenada_x{argv[5]}, punto_coordenada_y{argv[6]};
  double coordenada_x{stod(punto_coordenada_x)}, coordenada_y{stod(punto_coordenada_y)};
  if (mi_circulo.EsInterior(coordenada_x, coordenada_y)) {
    std::cout << "El punto (" << punto_coordenada_x << ", " << punto_coordenada_y << ")";
    std::cout  << " está dentro del circulo.\n\n";
  } 
  else {
    std::cout << "El punto (" << punto_coordenada_x << ", " << punto_coordenada_y << ")";
    std::cout  << " no está dentro del circulo.\n\n";
  }
  return 0;
}