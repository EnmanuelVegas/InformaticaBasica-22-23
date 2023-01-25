// Comenzamos.


#include <iostream>

int main () {

  int primer_numero;
  int tercer_numero;
  int cuarto_numero;
  int segundo_numero;    
  
  std::cin >> primer_numero >> segundo_numero >> tercer_numero >> cuarto_numero;
  std::cout << primer_numero * segundo_numero - (tercer_numero + cuarto_numero) << std::endl;
  
  return 0;
}

