/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Nov 7, 2022
 * @brief Shows floating point arithmetics
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <algorithm>
void Usage (int argc, char* argv[]);
bool AreEqual(const double kPrimerNumero, const double kSegundoNumero, const double kEpsilon);

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string primer_numero = argv[1];
  std::string segundo_numero = argv[2];
  const double kPrimerNumero = stod(primer_numero);
  const double kSegundoNumero = stod(segundo_numero);
  const double kEpsilon{1e-7};
  if (AreEqual(std::max(kPrimerNumero, kSegundoNumero), std::min(kPrimerNumero,
      kSegundoNumero), kEpsilon) == true) {
    std::cout << "Son aproximadamente iguales." << std::endl;
  } else {
      std::cout << "No son aproximadamente iguales." << std::endl;
    }
  return 0;
}
bool AreEqual(const double kPrimerNumero, const double kSegundoNumero, const double kEpsilon) {
  if (kPrimerNumero - kSegundoNumero < kEpsilon) {
    return true;
  } else {
      return false;
    }
}
void Usage (int argc, char* argv[]) {
  if (argc != 3) {
  std::cout << "Uso incorrecto del programa." << std::endl;
  }
}
