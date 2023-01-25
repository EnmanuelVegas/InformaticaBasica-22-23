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

#include <iostream>
#include <cstdlib>

void Usage(int argc, char* argv[]);
int CreacionNumeroAleatorio(int argc, char* argv[]);

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  CreacionNumeroAleatorio(argc, argv);
  return 0;
}

int CreacionNumeroAleatorio(int argc, char* argv[]) {
  std::string string_inferior = argv[1]; 
  std::string string_superior = argv[2];
  int limite_inferior = stoi(string_inferior);
  int limite_superior = stoi(string_superior);
  srand((unsigned) time(NULL));
  std::cout << limite_inferior + (rand() % (limite_superior - limite_inferior + 1)) 
  << std::endl;
  return 0;
}

void Usage (int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Este programa ha sido llamado incorrectamente. Debiera usted";
    std::cout << "proporcionar 2 argumentos, además del nombre del programa."; 
    std::cout << std::endl << std::endl;
    exit;
  }
}
