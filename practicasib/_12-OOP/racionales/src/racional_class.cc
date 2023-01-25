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

#include "racional_class.h"
#include "tools.h"

// Constructor por defecto (1, 1) y parametrizado
Racional::Racional(int numerador, int denominador) 
  : numerador_{numerador}, denominador_{denominador} {}

/**
 * Sobrecarga del operador "-" para la resta de racionales. 
 */
Racional Racional::operator-(const Racional& racional_dos) const {
  int maximo_comun_multiplo{std::max(denominador(), racional_dos.denominador())};
  while (true) {
    if (maximo_comun_multiplo % denominador() == 0 && 
      maximo_comun_multiplo % racional_dos.denominador() == 0) {
      break;
    }
    else {
      ++maximo_comun_multiplo;
    }
  }
  int primer_restando{numerador() * (maximo_comun_multiplo / denominador())};
  int segundo_restando{racional_dos.numerador() * (maximo_comun_multiplo / racional_dos.denominador())};
  int nuevo_denominador = primer_restando - segundo_restando;
  return Racional{nuevo_denominador, maximo_comun_multiplo};
}

/**
 * Sobrecarga del operador "+" para la suma de racionales. 
 */
Racional Racional::operator+(const Racional& racional_dos) const {
  int maximo_comun_multiplo{std::max(denominador(), racional_dos.denominador())};
  while (true) {
    if (maximo_comun_multiplo % denominador() == 0 && 
      maximo_comun_multiplo % racional_dos.denominador() == 0) {
      break;
    }
    else {
      ++maximo_comun_multiplo;
    }
  }
  int primer_sumando{numerador() * (maximo_comun_multiplo / denominador())};
  int segundo_sumando{racional_dos.numerador() * (maximo_comun_multiplo / racional_dos.denominador())};
  int nuevo_denominador = primer_sumando + segundo_sumando;
  return Racional{nuevo_denominador, maximo_comun_multiplo};
}

/**
 * Sobrecarga del operador "*" para la multiplicación de racionales. 
 */
Racional Racional::operator*(const Racional& racional_dos) const {
  int nuevo_numerador{numerador() * racional_dos.numerador()};
  int nuevo_denominador{denominador() * racional_dos.denominador()};
  return Racional{nuevo_numerador, nuevo_denominador};
}

/**
 * Sobrecarga del operador "/" para la división de racionales. 
 */
Racional Racional::operator/(const Racional& racional_dos) const {
  int nuevo_numerador{numerador() * racional_dos.denominador()};
  int nuevo_denominador{denominador() * racional_dos.numerador()};
  return Racional{nuevo_numerador, nuevo_denominador};
}

/**
 * Compara dos racionales, el de la clase y otro, para determinar cuál es mayor.
 * @param racional con el que se quiere comparar.
 * @return valor booleano correspondiente a si el racional de la clase mayor que
 * el aportado o no. 
 */
bool Racional::CompararRacionales(const Racional& racional_dos) const {
  long long int comparable_racional_uno{numerador() * denominador()};
  long long int comparable_racional_dos{racional_dos.numerador() * racional_dos.denominador()};
  if (comparable_racional_uno > comparable_racional_dos) {
    return 1;
  }
  else {
    return 0;
  }
}