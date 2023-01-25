
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
  int numberone;
  int numbertwo;
  std::cin >> numberone >> numbertwo;  
  std::cout << numberone; std::cout << " + "; std::cout << numbertwo; 
  std::cout << " = " << numberone + numbertwo <<  std::endl;
  std::cout << numberone; std::cout << " - "; std::cout << numbertwo; 
  std::cout << " = " << numberone - numbertwo <<  std::endl;
  std::cout << numberone; std::cout << " * "; std::cout << numbertwo; 
  std::cout << " = " << numberone * numbertwo <<  std::endl;
  std::cout << numberone; std::cout << " / "; std::cout << numbertwo; 
  std::cout << " = " << numberone / numbertwo <<  std::endl;
  std::cout << numberone; std::cout << " % "; std::cout << numbertwo; 
  std::cout << " = " << numberone % numbertwo <<  std::endl;
    if (numberone > numbertwo) {
  std::cout << numberone; std::cout << " > "; std::cout << numbertwo << std::endl;
} else if (numberone == numbertwo) {
  std::cout << numberone; std::cout << " = "; std::cout << numbertwo << std::endl; 
} else {std::cout << numberone; std::cout << " = "; std::cout << numbertwo << std::endl;  
}


  /*std::cout << numberone; std::cout << " "; std::cout << numbertwo; 
  std::cout << " = " << numberone + numbertwo <<  std::endl;*/

  return 0;
}

