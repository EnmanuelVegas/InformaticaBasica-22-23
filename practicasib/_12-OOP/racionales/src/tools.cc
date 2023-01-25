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
  if (argc > 1) {
    std::string primer_argumento{argv[1]};
    if (primer_argumento == "--help") {
      std::cout << "\n./racionales -- Números Racionales\nModo de uso: ./racion"
                   "ales fichero_entrada fichero_salida\n\nfichero_entrada: Fic"
                   "hero de texto conteniendo líneas con un par de números raci"
                   "onales `a/b c/d` separados por un espacio\nfichero_salida: "
                   " Fichero de texto que contendrá líneas con las operaciones "
                   "realizadas: `a/b + c/d = n/m`\n\n";
      return false;
    }
  }
  int numero_de_parametros{3};
  if (argc != numero_de_parametros) {
    std::cout << "\n./racionales -- Números Racionales\nModo de uso: ./racional"
                 "es fichero_entrada fichero_salida\nPruebe ./racionales --help" 
                 " para más información\n\n";
    return false;
  }
  return true;
}
/**
 * Extrae los distintos racionales para su posterior transformación a enteros
 * @param vector donde se almacenarán los datos.
 * @param vector string de donde se extraerán los datos. 
 */
void VectorDeDatos(std::vector<std::string>& datos, const std::string& linea) {
  std::string racional{""};
  for (int i{0}; i < linea.size(); ++i) {
    if (linea[i] == '/' || linea[i] == ' ') {
      datos.emplace_back(racional);
      racional = "";
    }
    else {
      racional += linea[i];
    }
  }
  datos.emplace_back(racional);
}

//sobrecarga del operador de extracción "<<" para el tipo racional.
std::ostream& operator<<(std::ostream& out, const Racional& racional) {
  out << racional.numerador() << "/" << racional.denominador();
  return out;
}