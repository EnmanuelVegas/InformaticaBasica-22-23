/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Client program to work with the vector3D class
 */

#include <iostream>

#include "vector3D.h"

int main() {
  Vector3D vector1{};
  std::cout << "First vector: " << vector1;
  // 3.1 // Vector3D vector2{1.0, 2, 3};
  // std::cout << "Second vector: " << vector2;
  // Vector3D sum_vector;
  // sum_vector = vector1 + vector2;     
  // 3.2 // std::cout << "Sum of the two vectors: " << sum_vector;
  // double scalar_product = vector1 * vector2;     
  // 3.3 // std::cout << "Scalar product of both vectors: " << scalar_product << std::endl;
  // Vector3D multiplied_vector;
  // const double kMultiplier{4.0};
  // 3.4 // multiplied_vector = vector1.MultiplyVector(kMultiplier);
  // std::cout << "Multiplied Vector: " << multiplied_vector;
  // double vector_module{vector1.Module()};
  // 3.5 // std::cout << "Module of the first vector: " << vector_module << std::endl;
  return 0;
}

