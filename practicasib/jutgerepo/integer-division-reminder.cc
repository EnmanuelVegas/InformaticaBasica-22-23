
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

int main(){
	int entero, natural;
	std::cin >> entero >> natural;
	int division = entero / natural;
	int residuo = entero % natural;
	 if (residuo < 0) {
		division = division - 1;
		residuo = -(division * natural) + entero;
	} 
	std::cout << division << " " << residuo << std::endl;
}
