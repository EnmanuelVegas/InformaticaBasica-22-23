
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


void ImprimirTipoIntervalos(eye_x_intervalo_1, eje_y_intervalo_2,
     eje_x_intervalo_2, eje_y_intervalo_2);

void CompararSiSonIguales(eye_x_intervalo_1, eje_y_intervalo_2,
     eje_x_intervalo_2, deje_y_intervalo_2);

int main() {
  int eye_x_primero, eje_y_primero;
  int eye_x_segundo, eje_y_segundo;
  std::cin >> eye_x_primero >> eje_y_primero >> eje_x_segundo
  >> eje_y_segundo;
  ImprimirTipoIntervalos(eye_x_primero, eje_y_primero, eje_x_segundo, eje_y_segundo);
  InterseccionDelIntervalo(eye_x_primero, eje_y_segundo, eje_x_segundo, eje_y_segundo); 
  return 0;
}

void ImprimirTipoIntervalos(eye_x_intervalo_1, eje_y_intervalo_2,
     eje_x_intervalo_2, eje_y_intervalo_2) {
  if (eje_x_primero == eje_x_segundo && eje_y_primero == eje_y_segundo) {
    std::cout << "=" << std::endl;
  }
  if (eje_x_primero < eje_x_segundo && eje_y_primero < eje_y_segundo) {
    std::cout << "1" << std::endl;
  }
  if (eje_x_primero > eje_x_segundo && eje_y_primero > eje_y_segundo) {
    std::cout << "2" << std::endl;
  }
  std::cout << "?" <<std::endl;
  

void CompararSiSonIguales(eye_x_intervalo_1, eje_y_intervalo_2,
     eje_x_intervalo_2, deje_y_intervalo_2) {


}

  
  
  
    

