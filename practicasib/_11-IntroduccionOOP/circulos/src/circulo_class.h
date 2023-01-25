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

#ifndef CIRCULO_H
#define CIRCULO_H

/** Declaración de la clase Circulo. 
*  La clase se implementa en este mismo fichero, en lugar de hacerlo en otro
*  separado (como debería)
*/
class Circulo {
 public:
  enum class Color {
    rojo,
    azul,
    verde,
    amarillo,
  };
  // Constructor aquí:
  Circulo(double radio, double centro_coordenada_x, double centro_coordenada_y,
  Circulo::Color color);
  /**
  * Calcula el valor del área del círculo especificado.
  * @return double correspondiente al área del círculo.
  */
  double Area();
  /**
  * Calcula el valor del perímetro del círculo especificado.
  * @return double correspondiente al perímetro del círculo.
  */
  double Perimetro();
  /**
  * Imprime en pantalla las características del circulo.
  *  */
  void ImprimirCaracteristicas();
  /**
  * Determina si un punto está dentro del circulo especificado.
  * @return double correspondiente al perímetro del círculo.
  */
  bool EsInterior(const double& coordenada_x, const double& coordenada_y);
 private:
  double radio_;
  double centro_x_;
  double centro_y_;
  Color color_;
};

#endif