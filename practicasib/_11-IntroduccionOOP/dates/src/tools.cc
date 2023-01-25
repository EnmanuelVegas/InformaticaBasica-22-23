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
#include "tools.h"
#include "date_class.h"

/**
 * Imprime en pantalla el uso correcto del programa.
 * @param valor del contador de argumentos y el vector que los contiene.
 * @return booleano sobre si el programa se ha ejecutado correctamente.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{4};
  if (argc != numero_de_parametros) {
    std::cout << "\nEl programa " << argv[0] << " ha sido ejecutado de forma incorrecta. ";
    std::cout << "El uso del\nprograma es el siguiente (mediante linea de comandos):\n\n"
                 ".\\dates día mes año (todos en números enteros)\n\n";
    return false;
  }
  return true;
} 

/**
 * Determina si una fecha especificada es válida, de acuerdo al calendario gregoriano.
 * @param entero correspondiente al día del mes introducido.
 * @param entero correspondiente al mes del año introducido.
 * @param entero correspondiente al año introducido.
 * @return valor booleano para determinar si cumple con esa característica
 */
bool is_valid_date(int dia_entrada, int mes_entrada, int año_entrada) {
  Date fecha{dia_entrada, mes_entrada, año_entrada};
  if (!fecha.VerificarAño(fecha.año())) {
    return false;
  }  
  if (fecha.VerificarAñoBisiesto(fecha.año())) {
    if (fecha.mes() == 2) {
      if (fecha.dia() > 29) {
        return false;
      }
    }
  }
  else {
    if (fecha.mes() == 2) {
      if (fecha.dia() > 28) {
        return false;
      }
    }
  }
  if (fecha.VerificarMes(fecha.mes())) {
    if (!fecha.MesDeTreintaDias(fecha.mes())) {
      if (fecha.dia() > 31 || fecha.dia() < 1) {
        return false;
      }
    }
    else {
      if (fecha.dia() > 30 || fecha.dia() < 1) {
        return false;
      }
    }
  }
  else {
    return false;
  }
  return true;
}