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
#include <fstream>
#include <cassert>
#include <string>
#include <vector>

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
bool Usage(const int argc, char* argv[]) {
  if (argc > 1) {
    std::string primer_argumento{argv[1]};
    if (primer_argumento == "--help") {
      std::cout << "\n./racionales -- Números Racionales\nModo de uso: ./racion"
                   "ales fichero_entrada fichero_salida\n\nfichero_entrada: Fic"
                   "hero de texto conteniendo líneas con un par de números raci"
                   "onales `a/b c/d` separados por un espacio\nfichero_salida: "
                   " Fichero de texto que contendrá líneas con las operaciones "
                   "realizadas: `a/b + c/d = n/m`\n\n";
      return false;
    }
  }
  int numero_de_parametros{3};
  if (argc != numero_de_parametros) {
    std::cout << "\n./racionales -- Números Racionales\nModo de uso: ./racional"
                 "es fichero_entrada fichero_salida\nPruebe ./racionales --help" 
                 " para más información\n\n";
    return false;
  }
  return true;
}
/**
 * ....
 *
 * @param
 * @return
 * 
 *
 */
void VectorDeDatos(std::vector<std::string>& datos, const std::string& linea) {
  std::string racional{""};
  for (int i{0}; i < linea.size(); ++i) {
    if (linea[i] == '/' || linea[i] == ' ') {
      datos.emplace_back(racional);
      racional = "";
    }
    else {
      racional += linea[i];
    }
  }
  datos.emplace_back(racional);
}

class Racional {
 public:
  // Constructor por defecto (1, 1) y parametrizado
  Racional(int numerador = 1, int denominador = 1) 
    : numerador_{numerador}, denominador_{denominador}
    {
    }
  int numerador() const { return numerador_; }
  int denominador() const { return denominador_; }
  // Resta de racionales
  Racional operator-(const Racional& racional_dos) const {
    int maximo_comun_multiplo{std::max(denominador(), racional_dos.denominador())};
    while (true) {
      if (maximo_comun_multiplo % denominador() == 0 && 
         maximo_comun_multiplo % racional_dos.denominador() == 0) {
        break;
      }
      else {
        ++maximo_comun_multiplo;
      }
    }
    int primer_restando{numerador() * (maximo_comun_multiplo / denominador())};
    int segundo_restando{racional_dos.numerador() * (maximo_comun_multiplo / racional_dos.denominador())};
    int nuevo_denominador = primer_restando - segundo_restando;
    return Racional{nuevo_denominador, maximo_comun_multiplo};
  }
  Racional operator+(const Racional& racional_dos) const {
    int maximo_comun_multiplo{std::max(denominador(), racional_dos.denominador())};
    while (true) {
      if (maximo_comun_multiplo % denominador() == 0 && 
         maximo_comun_multiplo % racional_dos.denominador() == 0) {
        break;
      }
      else {
        ++maximo_comun_multiplo;
      }
    }
    int primer_sumando{numerador() * (maximo_comun_multiplo / denominador())};
    int segundo_sumando{racional_dos.numerador() * (maximo_comun_multiplo / racional_dos.denominador())};
    int nuevo_denominador = primer_sumando + segundo_sumando;
    return Racional{nuevo_denominador, maximo_comun_multiplo};
  }
  Racional operator*(const Racional& racional_dos) const {
    int nuevo_numerador{numerador() * racional_dos.numerador()};
    int nuevo_denominador{denominador() * racional_dos.denominador()};
    return Racional{nuevo_numerador, nuevo_denominador};
  }
  Racional operator/(const Racional& racional_dos) const {
    int nuevo_numerador{numerador() * racional_dos.denominador()};
    int nuevo_denominador{denominador() * racional_dos.numerador()};
    return Racional{nuevo_numerador, nuevo_denominador};
  }
  bool CompararRacionales(const Racional& racional_dos) const {
    long long int comparable_racional_uno{numerador() * denominador()};
    long long int comparable_racional_dos{racional_dos.numerador() * racional_dos.denominador()};
    if (comparable_racional_uno > comparable_racional_dos) {
      return 1;
    }
    else {
      return 0;
    }
  }
  friend std::ostream& operator<<(std::ostream& out, const Racional& racional);

 private:
  int numerador_;
  int denominador_;
};
std::ostream& operator<<(std::ostream& out, const Racional& racional) {
  out << racional.numerador() << "/" << racional.denominador();
  return out;
}

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::ifstream archivo_entrada{argv[1]};
  if (!archivo_entrada) {
    std::cerr << "El archivo \"" << argv[1] << "\" no pudo ser localizado.";
    std::cout << '\n';
    return 1;
  } 
  std::string linea;
  std::vector<std::string> datos;
  while (std::getline(archivo_entrada, linea)) {
    VectorDeDatos(datos, linea);
  }
  int primer_numerador{stoi(datos[0])}, primer_denominador {stoi(datos[1])};
  int segundo_numerador{stoi(datos[2])}, segundo_denominador{stoi(datos[3])};
  assert (primer_denominador != 0 && "El denominador no puede ser 0");
  assert (segundo_denominador != 0 && "El denominador no puede ser 0");
  Racional primer_racional{primer_numerador, primer_denominador};
  Racional segundo_racional{segundo_numerador, segundo_denominador};
  Racional resultado;
  std::ofstream archivo_salida{argv[2]};
  resultado = primer_racional + segundo_racional;
  archivo_salida << primer_racional << " + " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  resultado = primer_racional - segundo_racional;
  archivo_salida << primer_racional << " - " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  resultado = primer_racional * segundo_racional;
  archivo_salida << primer_racional << " * " << segundo_racional << " = ";
  archivo_salida  << resultado << '\n';
  resultado = primer_racional / segundo_racional;
  archivo_salida << primer_racional << " / " << segundo_racional << " = ";
  archivo_salida << resultado << '\n';
  if (primer_racional.CompararRacionales(segundo_racional)) {
    archivo_salida << primer_racional.numerador() << "/" << primer_racional.denominador();
    archivo_salida << " es mayor.\n";
  }
  else {
    archivo_salida << segundo_racional.numerador() << "/" << segundo_racional.denominador();
    archivo_salida << " es mayor.\n";
  }
  return 0;
}