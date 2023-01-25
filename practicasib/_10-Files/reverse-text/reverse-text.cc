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
 * Esta funcion invierte los caracteres encontrados en las palabras leidas en el
 * fichero, y las imprime en el fichero_salida.
 *
 * @param nombre del fichero de entrada, del fichero de salida 
 */
void InvertirPalabrasDeUnFichero(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida) {
  std::ifstream fichero_entrada{nombre_fichero_entrada};
  std::ofstream fichero_salida{nombre_fichero_salida};
  std::string palabra;
  while (fichero_entrada >> palabra) {
    std::string palabra_invertida;
    std::string puntuacion{""}; 
    for (int i{palabra.size() - 1}; i >= 0; --i) {
      if ((palabra[i] >= 'a' && palabra[i] <= 'z') || (palabra[i] >= 'A' && palabra[i] <= 'Z')) {
        palabra_invertida += palabra[i];
      }
      if (ispunct(palabra[i])) {
        puntuacion += palabra[i];
      }  
    } 
    palabra_invertida += puntuacion;
    fichero_salida << palabra_invertida << " ";
  }    
}
int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::ifstream fichero_entrada{argv[1]};
  if (!fichero_entrada) {
    std::cout << "El archivo no se pudo abrir.\n";
    return 1;
  }
  std::string nombre_fichero_entrada{argv[1]};
  std::string nombre_fichero_salida{argv[2]};
  InvertirPalabrasDeUnFichero(nombre_fichero_entrada, nombre_fichero_salida);
  return 0;
}