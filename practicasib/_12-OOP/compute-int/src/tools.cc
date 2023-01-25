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
#include <vector>
#include <string>

#include "tools.h"


/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{3};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " numeros enteros." << '\n';
    return false;
  }
  return true;
}