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
#include <cmath>

bool IsAValidTriangle(double lado_a, double lado_b, double lado_c) {
  if (lado_a > 0 && lado_a > 0 && lado_a > 0) { 
    if (lado_a <= lado_b + lado_c && lado_b <= lado_a + lado_c && lado_c <= lado_a
      + lado_b) {
      return true;
    }
    return false;
  }
  std::cout << "Todos los lados tienen que ser positivos." << std::endl;
  return false;
}
double Area(double lado_a, double lado_b, double lado_c) {
  double semiperimetro = ((lado_a + lado_b + lado_c) / 2);
  double radicando = semiperimetro * (semiperimetro - lado_a) * (semiperimetro - lado_b) *
         (semiperimetro - lado_c);
  double area = sqrt(radicando);
  return area;
}
int main() {
  double lado_a, lado_b, lado_c;
  std::cin >> lado_a >> lado_b >> lado_c;
  if (IsAValidTriangle(lado_a, lado_b, lado_c) == true) {
    std::cout << Area(lado_a, lado_b, lado_c);
  } else {
      std::cout << "Not a valid Triangle" << std::endl;
      return 0;
    }
  std::cout << std::endl;
  return 0;
}
