/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief 
  * @bug There are no known bugs.
  */
//help https://stackoverflow.com/questions/7681555/resetting-the-end-of-file-state-of-a-ifstream-object-in-c

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
void Usage(int argc, char* argv[]) {
  int numero_de_parametros{2};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetro." << std::endl;
  }
}
/**
 * Imprime en pantalla las distintas especificaciones básicas del DFA en cuestión.
 *
 * @param línea entera del fichero de especificacion.
 * @param número de la línea en cuestión, para saber qué imprimir en pantalla.
 */
void Caracteristicas(const std::string& linea, const int numero_linea, 
  const std::vector<char> &conjunto_aceptacion) {
  switch (numero_linea) {
    case 1:
      std::cout << "|Q| = " << linea[0] << std::endl;
      break;
    case 2:
      std::cout << "q0 = " << linea[0] << std::endl;
      std::cout << "F = {";
      for (int i{0}; i < conjunto_aceptacion.size() - 1 ; ++i) {
        std::cout << conjunto_aceptacion[i] << ", ";
      }
      std::cout << conjunto_aceptacion[conjunto_aceptacion.size() - 1] << "}";
      std::cout << '\n';
      break;
    default:
      std::cout << "Error. Esto nunca debería aparecer";      
      break;
  }
}
/**
 * Imprime en pantalla las distintas Funciones de transición (delta) del DFA.
 *
 * @param línea entera del fichero de función de transición.
 */
void FuncionDeTransicion(const std::string& linea) {
  char transiciones = linea[4];
  int numero_transiciones = transiciones - '0';
  std::string texto_transicion = "delta(";
  int simbolo_entrada{6}, destino{8};
  for (int i{1}; i <= numero_transiciones; ++i) {
    std::cout << texto_transicion << linea[0] << ", "; 
    std::cout << linea[simbolo_entrada] << ") = " << linea[destino];
    std::cout << std::endl;
    simbolo_entrada += 4;
    destino += 4;
  }
}
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream archivo{argv[1]};
  if (!archivo) {
    std::cerr << "El archivo \"" << argv[1] << "\" no pudo ser localizado.";
    std::cout << '\n';
    return 1;
  }
  int contador_lineas{1};
  std::string dato;
  std::vector<char> conjunto_aceptacion{};
  while (std::getline(archivo, dato)) {
    if (contador_lineas >= 3 && dato[2] == '1') {
      conjunto_aceptacion.insert(conjunto_aceptacion.end(), dato[0]);
    }
    ++contador_lineas;
  }
  contador_lineas = 1;
  archivo.clear();                     /// Limpiar errores y endoffiles bits.
  archivo.seekg(0, std::ios::beg);     /// Comenzar de nuevo la lectura del archivo   
  while (std::getline(archivo, dato)) {
    if (contador_lineas < 3) {
      Caracteristicas(dato, contador_lineas, conjunto_aceptacion);
    } 
    else {
      FuncionDeTransicion(dato);
    }
    ++contador_lineas;
  }
  return 0;
}