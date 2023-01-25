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

#ifndef COMPLEJOS_CLASS_H
#define COMPLEJOS_CLASS_H

#include <iostream>

/** Declaración de la clase Complejo.
*/ 
class Complejo {
 public:
  // Constructor aquí:
  Complejo(double parte_real, double parte_imaginaria);
  double parte_real() const {return parte_real_;}
  double parte_imaginaria() const {return parte_imaginaria_;}
  Complejo operator+(const Complejo& complejo2) const; //suma
  Complejo operator-(const Complejo& complejo2) const; //resta
  friend std::ostream& operator<<(std::ostream& out, const Complejo& complejo);
 private:
  double parte_imaginaria_;
  double parte_real_;
};

#endif