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
#include <string>

int main() {
  int inicio_intervalo_uno, final_intervalo_uno, inicio_intervalo_dos, final_intervalo_dos;
  std::cin >> inicio_intervalo_uno >> final_intervalo_uno >> inicio_intervalo_dos >> final_intervalo_dos;
  
  if (inicio_intervalo_dos == inicio_intervalo_uno && final_intervalo_dos == final_intervalo_uno) {
        std::cout << "=";   
  } 
  else {
    if (inicio_intervalo_dos >= inicio_intervalo_uno && final_intervalo_dos <= final_intervalo_uno) {
      std::cout << "2";
    }
    else {
      if (inicio_intervalo_uno >= inicio_intervalo_dos && final_intervalo_uno <= final_intervalo_dos) {
        std::cout << "1";
      }   
      else {
        std::cout << "?";
      }
    }
  }
  std::cout << " , ";
  int interseccion_inicio, interseccion_final;
  if (inicio_intervalo_uno > inicio_intervalo_dos) {
    interseccion_inicio = inicio_intervalo_uno;
  }
  else {
    interseccion_inicio = inicio_intervalo_dos;
  }
  if (final_intervalo_uno > final_intervalo_dos) {
    interseccion_final = final_intervalo_dos;
  }
  else {
    interseccion_final = final_intervalo_uno;
  }
  if (interseccion_inicio > interseccion_final) {
    std::cout << "[]";
  }
  else {
    std::cout << "[" << interseccion_inicio << "," << interseccion_final << "]";
  }
  std::cout << std::endl;

  return 0;
}