/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enmanuel Vegas 
 * @date nov.2022
 * @brief This file declares the functions of the parent folder program.
 *
 */

#include <iostream>
#include <vector>

#include "racional_class.h"

#ifndef TOOLS_H
#define TOOLS_H

bool Usage(const int argc, char* argv[]);
void VectorDeDatos(std::vector<std::string>& datos, const std::string& linea);
std::ostream& operator<<(std::ostream& out, const Racional& racional);

#endif