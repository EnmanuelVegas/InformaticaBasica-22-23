
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief Este problema dice si la temperatura está caliente (hot) o frío
  * (cold). Además, determina si el agua se congelaría (freeze) o herviría
  * (boil).
  * @bug There are no known bugs.
  */

#include <iostream>

int main() {

  int temperature;
  std::cin >> temperature;  
  if (temperature > 30) {
    std::cout << "it's hot" << std::endl;
  } else if (temperature < 10) {
       std::cout << "it's cold" << std::endl;
    } else {
        std::cout << "it's ok" << std::endl;
      } if (temperature >= 100) {
          std::cout << "water would boil" << std::endl;
        } if (temperature <= 0) {
            std::cout << "water would freeze" << std::endl;
          }  
  return 0;
}

