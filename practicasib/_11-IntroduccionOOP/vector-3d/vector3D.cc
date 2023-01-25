/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Implementation
 */

#include <iostream>
#include <cmath>

#include "vector3D.h"

/**
 * @brief Displays the given vector.
 *        Overloading the insertion (<<) operator
 * @param[in] output: The output stream where text is inserted
 * @param[in] kVector: constant reference to the vector to print
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& vector) {
  output << '(' << vector.coordenada_x() << ", " << vector.coordenada_y() << ", " << vector.coordenada_z() << ")\n";
  return output;
}
/**
* Cálculo del producto escalar del vector por una constante.
* @return Vector de tipo Vector3d
*/
Vector3D Vector3D::MultiplyVector(const double kEscalarFactor) const {
  Vector3D resultado{coordenada_x() * kEscalarFactor, coordenada_y() * kEscalarFactor, 
    coordenada_z() * kEscalarFactor};;
  return resultado;
}
double Vector3D::Module() const {
  double resultado{0};
  double coordenada_x_cuadrado{coordenada_x() * coordenada_x()};
  double coordenada_y_cuadrado{coordenada_y() * coordenada_y()};
  double coordenada_z_cuadrado{coordenada_z() * coordenada_z()};
  resultado = sqrt(coordenada_x_cuadrado + coordenada_y_cuadrado + coordenada_z_cuadrado);
  return resultado;
}