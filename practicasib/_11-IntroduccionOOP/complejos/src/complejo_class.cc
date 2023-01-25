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
#include "complejo_class.h"

//Constructor aquí
Complejo::Complejo(double parte_real = 1.00, double parte_imaginaria = 1.00) {
  parte_imaginaria_ = parte_imaginaria;
  parte_real_ = parte_real;
}
/**
* Sobrecarga del operador "+" para sumar numeros complejos.
*/
Complejo Complejo::operator+(const Complejo& segundo_complejo) const {
  return Complejo{parte_real_ + segundo_complejo.parte_real_, 
         parte_imaginaria_ + segundo_complejo.parte_imaginaria_};
}
/**
* Sobrecarga del operador "-" para restar numeros complejos.
*/
Complejo Complejo::operator-(const Complejo& segundo_complejo) const {
  return Complejo{parte_real_ - segundo_complejo.parte_real_, 
         parte_imaginaria_ - segundo_complejo.parte_imaginaria_};
}
/**
* Sobrecarga del operador "<<" para imprimir numeros complejos.
*/
std::ostream& operator<<(std::ostream& out, const Complejo& complejo) {
  out << complejo.parte_real() << " " << std::showpos << complejo.parte_imaginaria();
  out << "i\n";
  return out; 
}