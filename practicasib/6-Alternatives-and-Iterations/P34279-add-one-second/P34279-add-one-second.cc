
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief Write a program that adds one second to a clock time, given its
  * hours, minutes and seconds.
  * @bug There are no known bugs.
  * @see https://jutge.org/problems/P34279_en
  */

#include <iostream>
#include <iomanip>

int main() {
  int horas;
  int minutos;  
  int segundos;
  std::cin >> horas >> minutos >> segundos;
  segundos++;
  if (segundos == 60) {
    segundos = 0;
    minutos++;
  } 
  if (minutos == 60) {
    minutos = 0;
    horas++;
  }
  if (horas == 24) {
    horas = 0;
  } 
  std::cout << std::setfill('0') << std::setw(2) << horas << ":" <<
  std::setfill('0') << std::setw(2) << minutos << ":" << std::setfill('0') <<
  std::setw(2) << segundos << std::endl;

  return 0;
}

