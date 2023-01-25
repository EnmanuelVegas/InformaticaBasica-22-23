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
#include <fstream>
#include <string>

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{3};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetros." << '\n';
    return false;
  }
  return true;
}
/**
 * @param caracter que se extrae del texto
 * @return caracter transformado, en caso de ser una vocal. Mismo caracter en el
 * resto de casos
 */
char Rotar(char caracter) {
  switch(caracter) {
    case 'a':
      return 'e';
    case 'e':
      return 'i';
    case 'i':
      return 'o';
    case 'o':
      return 'u';
    default:
      return caracter;
  }
}
int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::ifstream archivo_entrada{argv[1]};
  if (!archivo_entrada) {
    std::cerr << "El archivo \"" << argv[1] << "\" no pudo ser localizado.\n";
    return 1;
  }
  std::ofstream archivo_salida{argv[2]};
  char caracter;
  while (archivo_entrada >> std::noskipws >> caracter) {
    archivo_salida << Rotar(caracter);  
  }
  return 0;
}