
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

void decompose(int seconds_remaining, int& hours, int& minutes, int& seconds) {
  hours = seconds_remaining / 3600;
  seconds_remaining -= hours * 3600;
  minutes = seconds_remaining / 60;
  seconds_remaining -= minutes * 60;
  seconds = seconds_remaining;
}

int main() {
  int seconds_total, hours, minutes, seconds;
  std::cin >> seconds_total;
  decompose(seconds_total, hours, minutes, seconds);
  std::cout << hours << minutes << seconds;
  return 0;
}

