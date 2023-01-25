
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

int main() {
  
  char uppercaseletter;
  std::cin >> uppercaseletter;
  int asciivalue{static_cast<int>(uppercaseletter)};
  if (asciivalue > 96) {
    std::cout << (static_cast<char>(65 + (asciivalue - 97))) << std::endl;
  } else if (asciivalue > 64/* && asciivalue < 97 */) {
      std::cout << (static_cast<char>(97 + (asciivalue - 65))) << std::endl;
    } 
  return 0;
}

/*
a----> 97
A----> 65
0----> 48

Los valores de más interés para nosotros son las letras 'a', 'A' y el dígito '0'. Estos caracteres tienen los códigos 97, 65 y 48 respectivamente. 
El interés de escoger estos viene del hecho que todo el alfabeto en minúsculas se situa a partir de la letra 'a', o sea que la 'b' tendría el código 98,
la 'c' el 99 y así hasta la 'z', que tiene el 122. Lo mismo sucede con las mayúsculas: la 'B' es el 66, la 'C' el 67, y así sucesivamente hasta la 'Z', 
que es el 90. Los dígitos del '0' al '9' ocupan las 10 posiciones desde el 48
hasta el 57 */
