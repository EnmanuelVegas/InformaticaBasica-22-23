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

/**
 * Imprime en pantalla el uso correcto del programa.
 * @param valor del contador de argumentos y el vector que los contiene.
 * @return booleano sobre si el programa se ha ejecutado correctamente.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{5};
  if (argc != numero_de_parametros) {
    std::cout << "\nEl programa " << argv[0] << " ha sido ejecutado de forma incorrecta. ";
    std::cout << "El uso del\nprograma es el siguiente (mediante linea de comandos):\n\n"
                 ".\\complejos parte-real-primer-numero parte-imaginaria-primer-numero "
                 "parte-real-segundo-numero parte-imaginaria-segundo-numero\n\n";
    return false;
  }
  return true;
} 

/** Declaración de la clase Complejo.
*/ 
class Complejo {
 public:
  // Constructor aquí:
  Complejo(double parte_real = 1.00, double parte_imaginaria = 1.00) {
    parte_imaginaria_ = parte_imaginaria;
    parte_real_ = parte_real;
  }
  double parte_real() const {return parte_real_;}
  double parte_imaginaria() const {return parte_imaginaria_;}
  Complejo operator+(const Complejo& complejo2) const; //suma
  Complejo operator-(const Complejo& complejo2) const; //resta
  friend std::ostream& operator<<(std::ostream& out, const Complejo& complejo);
 private:
  double parte_imaginaria_;
  double parte_real_;
};
/**
* Sobrecarga del operador "+" para sumar numeros complejos.
*/
Complejo Complejo::operator+(const Complejo& segundo_complejo) const {
  return Complejo{parte_real_ + segundo_complejo.parte_real_, 
         parte_imaginaria_ + segundo_complejo.parte_imaginaria_};
}
/**
* Sobrecarga del operador "-" para restar numeros complejos.
*/
Complejo Complejo::operator-(const Complejo& segundo_complejo) const {
  return Complejo{parte_real_ - segundo_complejo.parte_real_, 
         parte_imaginaria_ - segundo_complejo.parte_imaginaria_};
}
/**
* Sobrecarga del operador "<<" para imprimir numeros complejos.
*/
std::ostream& operator<<(std::ostream& out, const Complejo& complejo) {
  out << complejo.parte_real() << " " << std::showpos << complejo.parte_imaginaria();
  out << "i\n";
  return out; 
}
int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    exit (1);
  }
  std::string real_1{argv[1]}, imaginaria_1{argv[2]}, real_2{argv[3]},
  imaginaria_2{argv[4]};
  double primer_numero_real{stod(real_1)}, primer_numero_imaginario{stod(imaginaria_1)}, 
  segundo_numero_real{stod(real_2)}, segundo_numero_imaginario{stod(imaginaria_2)};
  Complejo complejo1{primer_numero_real, primer_numero_imaginario};
  Complejo complejo2{segundo_numero_real, segundo_numero_imaginario};
  std::cout << "Los números complejos introducidos son:\n";
  std::cout << complejo1 << complejo2;
  Complejo resultado{complejo1 + complejo2};
  std::cout <<  "La suma de los complejos es: " << resultado;
  resultado = complejo1 - complejo2;
  std::cout << "La resta de los complejos es: " << resultado;
  return 0;
}
