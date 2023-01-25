/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief 
 * @see
 */

#include <iostream>
#include <cstdlib>    

#include "PRGRAMA.h"    

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula la suma de todos los términos pares de la \
serie de Fibonacci que sean menores que un valor, que el usuario \
ha de introducir por línea de comandos para la ejecución del programa";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/** Devuelve el valor de la suma de todos los términos de valor par de la serie de
 *  Fibonacci menores que kLimit
 *
 *  @param[in] kLimit. Se suman los términos pares menores que kLimit
 *  @return La suma de los términos pares menores que kLimit
 */
size_t FibonacciSum(const size_t kLimit) {
  size_t second_to_last{0},  // Second to last term
           last{1},          // Last term generated
           new_term;         // New term of the serie
  size_t long sum{0};        // Accumulated sum of the terms

  do {
    new_term = last + second_to_last;
    if (new_term % 2 == 0) {
      sum += new_term;
    }
    // Uncomment for debug: print each new term
    // std::cout << "Term: " << new_term << std::endl;
    second_to_last = last;
    last = new_term;
  } while (new_term < kLimit);
	return sum;
}
