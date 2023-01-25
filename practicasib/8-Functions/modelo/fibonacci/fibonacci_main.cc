/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enmanuel Vegas Acosta
 * @date Nov.2022
 * @brief
 * @see 
 */

#include <iostream>
#include <cstdlib> 

#include "PROGRAMA.h"    

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string limit = argv[1];
  const size_t kLimit = stoi(limit);
  std::cout << "Sum: " << FibonacciSum(kLimit) << std::endl; 
  return 0;
}
