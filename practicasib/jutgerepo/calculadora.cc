// Comenzamos.


#include <iostream>

int main () {

  int primer_numero;
  int segundo_numero;

  //std::cout << "Introduzca el primer número:" << std::endl;
  std::cin >> primer_numero >> segundo_numero;  
  //std::cout << "Introduzca el segundo número:" << std::endl;
  //std::cout << "Resultado de la operación: " 
  long long resultado = primer_numero * segundo_numero;
  std::cout << resultado << std::endl;
  
  return 0;
}