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
#include "date_class.h"

/**
 * Constructor de la clase.
 * @param entero correspondiente al día del mes introducido.
 * @param entero correspondiente al mes del año introducido.
 * @param entero correspondiente al año introducido.
 */
Date::Date(int dia_funcion, int mes_funcion, int año_funcion) {
  dia_ = dia_funcion;
  mes_ = mes_funcion;
  año_ = año_funcion;
}
// Getter de date.año_
int Date::año() {return año_;}
// Getter de date.mes_
int Date::mes() {return mes_;}
// Getter de date.dia_
int Date::dia() {return dia_;}
/**
 * Determina si el año especificado es válido.
 * @param entero correspondiente al año introducido.
 * @return valor booleano para determinar si cumple con esa característica.
 */
bool Date::VerificarAño(int año) {
  if (año > 9999 || año < 1800) {
    return false;
  }
  return true;
}
/**
 * Determina si el año especificado es bisiesto.
 * @param entero correspondiente al año introducido.
 * @return valor booleano para determinar si cumple con esa característica.
 */
bool Date::VerificarAñoBisiesto(int año) {
  if (año % 4 == 0) { 
    if (año % 100 != 0) {
      return true;
    } else if ((año / 100) % 4 == 0) {
      return true;
    } else {
        return false;
      }
  } else {
    return false;
  } 
}
/**
 * Determina si el mes especificado es válido según el calendario gregoriano.
 * @param entero correspondiente al mes introducido.
 * @return valor booleano para determinar si cumple con esa característica.
 */
bool Date::VerificarMes(int mes) {
  if (mes > 12 || mes < 1) {
    return false;
  }
  return true;
}
/**
 * Determina si el mes especificado tiene 30 días.
 * @param entero correspondiente al mes introducido.
 * @return valor booleano para determinar si cumple con esa característica.
 */
bool Date::MesDeTreintaDias(int mes) {
  if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
    return false;
  }
  return true;
}