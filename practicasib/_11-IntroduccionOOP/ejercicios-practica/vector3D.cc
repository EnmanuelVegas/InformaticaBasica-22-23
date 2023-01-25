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
 * @param[in] kOutput: The output that is shown to the user.
 * @param[in] kVector: constant reference to the given vector.
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& vector1) {
  output << '(' << vector1.coordenada_x() << ", " << vector1.coordenada_y() << ", " << vector1.coordenada_z() << ")\n";
  return output;
}
Vector3D Vector3D::operator+(const Vector3D& segundo_vector) const {
  Vector3D resultado{coordenada_x() + segundo_vector.coordenada_x(), coordenada_y() + 
    segundo_vector.coordenada_y(), coordenada_z() + segundo_vector.coordenada_z()};
  return resultado;
}
double Vector3D::operator*(const Vector3D& segundo_vector) const {
  double producto_x{coordenada_x() * segundo_vector.coordenada_x()};
  double producto_y{coordenada_y() * segundo_vector.coordenada_y()};
  double producto_z{coordenada_z() * segundo_vector.coordenada_z()}; 
  return producto_x + producto_y + producto_z;
}
Vector3D Vector3D::MultiplyVector(const double kMultiplier) {
  return Vector3D{coordenada_x() * kMultiplier, coordenada_y() * kMultiplier, coordenada_z() * kMultiplier};
}
double Vector3D::Module() {
  double resultado;
  double coordenada_x_cuadrado{coordenada_x() * coordenada_x()};
  double coordenada_y_cuadrado{coordenada_y() * coordenada_y()};
  double coordenada_z_cuadrado{coordenada_z() * coordenada_z()};
  resultado = sqrt(coordenada_x_cuadrado + coordenada_y_cuadrado + coordenada_z_cuadrado);
  return resultado;
}