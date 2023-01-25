
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

#ifndef DATE_CLASS_H
#define DATE_CLASS_H

#include <iostream>

//Declaración de la clase "Date": 
class Date {
 public:
  Date(int dia_funcion = 1, int mes_funcion = 1, int año_funcion = 1);
  int año();
  int mes();
  int dia();
  bool VerificarAño(int año);
  bool VerificarAñoBisiesto(int año);
  bool VerificarMes(int mes);
  bool MesDeTreintaDias(int mes);
 private:
  int dia_;
  int mes_;
  int año_;
};

#endif