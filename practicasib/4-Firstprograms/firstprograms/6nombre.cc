/*
*
* Hola, esto es un comentario.
*
*
*/

#include <iostream>
using std::string; 
 
int main () {
  string nombre;
  char dot {'.'}, surprise {'!'};
  std::cout << "Cúal es tu nombre?" << std::endl;
  std::cin >> nombre;
  std::cout << "Hola, " << nombre << surprise;
  std::cout << " Eres un gran programador" << dot << std::endl;
  return 0;
}