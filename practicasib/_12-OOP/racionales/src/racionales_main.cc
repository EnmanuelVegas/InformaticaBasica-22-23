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
#include <fstream>
#include <cassert>
#include <string>
#include <vector>

#include "tools.h"
#include "racional_class.h"

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::ifstream archivo_entrada{argv[1]};
  if (!archivo_entrada) {
    std::cerr << "El archivo \"" << argv[1] << "\" no pudo ser localizado.";
    std::cout << '\n';
    return 1;
  } 
  std::string linea;
  std::vector<std::string> datos;
  while (std::getline(archivo_entrada, linea)) {
    VectorDeDatos(datos, linea);
  }
  int primer_numerador{stoi(datos[0])}, primer_denominador {stoi(datos[1])};
  int segundo_numerador{stoi(datos[2])}, segundo_denominador{stoi(datos[3])};
  assert (primer_denominador != 0 && "El denominador no puede ser 0");
  assert (segundo_denominador != 0 && "El denominador no puede ser 0");
  Racional primer_racional{primer_numerador, primer_denominador};
  Racional segundo_racional{segundo_numerador, segundo_denominador};
  Racional resultado;
  std::ofstream archivo_salida{argv[2]};
  resultado = primer_racional + segundo_racional;
  archivo_salida << primer_racional << " + " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  resultado = primer_racional - segundo_racional;
  archivo_salida << primer_racional << " - " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  resultado = primer_racional * segundo_racional;
  archivo_salida << primer_racional << " * " << segundo_racional << " = ";
  archivo_salida  << resultado << '\n';
  resultado = primer_racional / segundo_racional;
  archivo_salida << primer_racional << " / " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  if (primer_racional.CompararRacionales(segundo_racional)) {
    archivo_salida << primer_racional << " es mayor.\n";
  }
  else {
    archivo_salida << segundo_racional << " es mayor.\n";
  }
  return 0;
}