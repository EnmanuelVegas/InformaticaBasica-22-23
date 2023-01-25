/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enmanuel Vegas 
 * @date nov.2022
 * @brief This file declares the functions of the parent folder program.
 *
 */

#include <iostream>

#ifndef COMPUTE_INT_CLASS_H
#define COMPUTE_INT_CLASS_H

//Declaración de la clase ComputeInt
class ComputeInt {
 public:
  // Constructor aquí
  ComputeInt(int numero = 1) : numero_a_tratar_{numero} { }
  // Getter
  int numero_a_tratar() { return numero_a_tratar_; }
  unsigned long long int CalcularFactorial();
  int CalcularSumaPrimerosTerminos();
  bool DeterminarPrimo(int numero);
  bool DeterminarPrimoPerfecto();
  bool DeterminarPrimoRelativo(int segundo_numero);
  bool EsEspecial();
 private:
  const int numero_a_tratar_;
};

#endif