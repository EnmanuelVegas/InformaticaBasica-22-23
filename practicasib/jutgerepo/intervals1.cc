/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date December 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int inicio_intervalo_uno, final_intervalo_uno, inicio_intervalo_dos, final_intervalo_dos;
  std::cin >> inicio_intervalo_uno >> final_intervalo_uno >> inicio_intervalo_dos >> final_intervalo_dos;
  int interseccion_inicio, interseccion_final;
  if (inicio_intervalo_uno > inicio_intervalo_dos) {
    interseccion_inicio = inicio_intervalo_uno;
  }
  else {
    interseccion_inicio = inicio_intervalo_dos;
  }
  if (final_intervalo_uno > final_intervalo_dos) {
    interseccion_final = final_intervalo_dos;
  }
  else {
    interseccion_final = final_intervalo_uno;
  }
  if (interseccion_inicio > interseccion_final) {
    std::cout << "[]";
  }
  else {
    std::cout << "[" << interseccion_inicio << "," << interseccion_final << "]";
  }
  std::cout << std::endl;
  /*int main () {
	int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 = max(x1,x2);
    y1 = min(y1,y2);
    if (x1>y1) cout << "[]" << endl;
    else cout << '[' << x1 << ',' << y1 << ']' << endl;
}*/
  return 0;
}

