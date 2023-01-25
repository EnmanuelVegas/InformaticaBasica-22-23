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

/**
 * Imprime en pantalla el uso correcto del programa.
 * @param valor del contador de argumentos y el vector que los contiene.
 * @return booleano sobre si el programa se ha ejecutado correctamente.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{7};
  if (argc != numero_de_parametros) {
    std::cout << "\nEl programa " << argv[0] << " ha sido ejecutado de forma incorrecta. ";
    std::cout << "El uso del\nprograma es el siguiente (usando la linea de comandos):\n\n"
                 ".\\circulo radio coordenada-x-centro coordenada-y-centro color "
                 "coordenada-x-punto-exterior coordenada-y-punto-exterior\n\n"
                 "Las opciones para el color son:\n0 = rojo\n1 = azul\n2 = verde\n"
                 "3 = amarillo\n\n";
    return false;
  }
  return true;
}