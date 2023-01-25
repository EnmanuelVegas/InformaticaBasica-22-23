/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Marta Rosa, alu0101559513
 * @date Dec 2022
 * @brief Programa que lee un fichero de texto que se le pase como parámetro y produce como salida ficheros con nombre `A.txt`, `B.txt`, ..., `Z.txt`. 
 * Cada uno de esos ficheros contiene en líneas separadas todas las palabras del fichero pasado como parámetro que comiencen por la correspondiente letra.
 *        
 *        El programa contiene un error y no funciona correctamente.
 *        Se propone utilizar el debugger para localizar y corregir el error.
 */

#include <iostream>
#include <fstream>
#include <string>

/**
* Dada una palabra, coge su primer carácter y crea un fichero con ese caŕacter
* con terminación .txt e introduce en dicho fichero la palabra correspondiente.
* Si ya está creado solo añade la palabra.
* @param palabra.
*/
void PutWords(const std::string& word) {
  char first_letter = word[0];
  first_letter = toupper(first_letter);
  std::string file_name = first_letter + ".txt";
  std::ofstream  file_out;
  file_out.open(file_name, std::ios::out);
  file_out << word << std::endl;
  file_out.close();
}

/**
* Dado un fichero, lee palabras del mismo y las imprime en pantalla
* @param nombre del fichero.
*/
void ReadWords(std::string namefile) {
  std::ifstream file(namefile);
  if (!file.is_open()) {
    std::cerr << "error" << std::endl;
  }
  std::string palabra{""};
  while (file >> palabra) {
    std::cout << "Palabra: " << palabra << std::endl;
    PutWords(palabra);
  } 
  file.close();
}

int main(const int argc, const char* argv[]) {
  std::string namefile = argv[1];
  ReadWords(namefile);
  return 0;
}
