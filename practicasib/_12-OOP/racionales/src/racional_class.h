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


#ifndef RACIONAL_CLASS_H
#define RACIONAL_CLASS_H

class Racional {
 public:
  Racional(int numerador = 1, int denominador = 1);
  int numerador() const { return numerador_; } 
  int denominador() const { return denominador_; }
  // Resta de racionales
  Racional operator-(const Racional& racional_dos) const;
  // Suma de racionales
  Racional operator+(const Racional& racional_dos) const;
  // Multiplicación de racionales
  Racional operator*(const Racional& racional_dos) const;
  // División de racionales
  Racional operator/(const Racional& racional_dos) const;
  bool CompararRacionales(const Racional& racional_dos) const;
  friend std::ostream& operator<<(std::ostream& out, const Racional& racional);
 private:
  int numerador_;
  int denominador_;
};

#endif