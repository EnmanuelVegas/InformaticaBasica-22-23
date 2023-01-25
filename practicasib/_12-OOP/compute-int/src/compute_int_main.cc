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
#include <cmath>

#include "tools.h"
#include "compute_int_class.h"

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::string primer_numero_string{argv[1]}, segundo_numero_string{argv[2]};
  int numero{stoi(primer_numero_string)}, segundo_numero{stoi(segundo_numero_string)};
  ComputeInt computacion{numero};
  std::cout << "\nSuma de factorial: " << computacion.CalcularFactorial() << '\n';
  std::cout << "Suma de sus n dígitos: " << computacion.CalcularSumaPrimerosTerminos();
  std::cout << '\n';
  if (computacion.DeterminarPrimo(0)) {
    std::cout << computacion.numero_a_tratar() << " es un número primo\n"; 
  }
  else {
    std::cout << computacion.numero_a_tratar() << " no es un número primo\n";
  }
  if (computacion.DeterminarPrimoPerfecto()) {
    std::cout << computacion.numero_a_tratar() << " es primo Perfecto\n";
  }
  else {
    std::cout << computacion.numero_a_tratar() << " no es primo Perfecto\n";
  }
  if (computacion.DeterminarPrimoRelativo(segundo_numero)) {
    std::cout << computacion.numero_a_tratar() << " es primo relativo de ";
    std::cout << segundo_numero << "\n\n";
  }
  else {
    std::cout << computacion.numero_a_tratar() << " no es primo relativo de ";
    std::cout << segundo_numero << "\n\n";
  }
  if (computacion.EsEspecial()) {
    std::cout << computacion.numero_a_tratar() << "Es un numero especial";
  }
  else {
    std::cout << computacion.numero_a_tratar() << "No es un numero especial";
  }
  return 0;
}