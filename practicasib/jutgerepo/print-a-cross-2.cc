
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

void print(int s, char caracter, int numero) {
    for (int i = 0; i < s; i++) cout << ' ';
    for (int i = 0; i < numero; i++) cout << c;
    cout << endl;
}

void cross(int n, char c) {
    for (int i = 0; i < n; i++) {
        if (i == n/2) print(0,c,n);
        else print(n/2,c,1);
    }
}

int main () {
	cross(5,'X');
}  

  return 0;
}
