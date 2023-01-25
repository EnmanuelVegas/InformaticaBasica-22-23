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
  int numero_de_parametros{2};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetros." << '\n';
    return false;
  }
  return true;
}
/**
 * Elimina los simbolos de puntuación de la cadena extraída.
 * @param referencia a la palabra que ha sido extraída.
 */ 
void EliminarPuntuacion(std::string &palabra) {
  for (int i{0}; i < palabra.size(); ++i) {
    if (ispunct(palabra[i])) {
      palabra.erase(i, 1);
    }
  }
}
/**
 * Cambia las letras mayúsculas por letras minúsculas.
 * @param referencia a la palabra que ha sido extraída.
 */ 
void TransformarAMinusculas(std::string &palabra) {
  for (int i{0}; i < palabra.length(); ++i) {
    if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
      palabra[i] += 32;
    }
  }
}
/**
 * Sobreescribe la palabra en un fichero cuyo nombre sea igual a la primera letra de
 * dicha palabra.
 * @param referencia a la palabra que ha sido extraída.
 */ 
void ClasificarPalabra(const std::string& palabra) {
  std::string carpeta{"./files/"}, extension{".txt"}, ruta_destino{""};
  char primera_letra_mayuscula{toupper(palabra[0])}; 
  ruta_destino = carpeta + primera_letra_mayuscula + extension;
  std::ofstream archivo_salida{ruta_destino, std::ios::app};
  archivo_salida << palabra << std::endl;
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
  std::string palabra;
  while (archivo_entrada >> palabra) {
    EliminarPuntuacion(palabra);
    TransformarAMinusculas(palabra);
    ClasificarPalabra(palabra);
  }
  return 0;
}