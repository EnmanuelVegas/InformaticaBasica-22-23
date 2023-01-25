
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
#include <iomanip>
#include <math.h>
#include <vector>

  int main() {
	int contador{0};
  double numero_a_evaluar, coeficiente, resultado{0};
  std::cin >> numero_a_evaluar;
  while (std::cin >> coeficiente) {
    resultado += coeficiente * pow (numero_a_evaluar, contador);
    contador++;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  return 0;
}

