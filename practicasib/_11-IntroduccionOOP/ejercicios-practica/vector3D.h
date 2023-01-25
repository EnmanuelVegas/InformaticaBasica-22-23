/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Definition
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

/** @brief Class Vector3D */
class Vector3D {
 public:
  Vector3D(double coordenada_x_default = 0.0, double coordenada_y_default = 0.0, double coordenada_z_default = 0.0) { 
    coordenada_x_ = coordenada_x_default;
    coordenada_y_ = coordenada_y_default;
    coordenada_z_ = coordenada_z_default; 
  }
  /*Vector3D(double coordenada_x_default = 0.0, double coordenada_y_default = 0.0, double coordenada_z_default =0.0) { 
    coordenada_x_ = coordenada_x_default;
    coordenada_y_ = coordenada_y_default;
    coordenada_z_ = coordenada_z_default;
  }*/
  // 3 Getters:
  double coordenada_x() const { return coordenada_x_; } 
  double coordenada_y() const { return coordenada_y_; }
  double coordenada_z() const { return coordenada_z_; }
  Vector3D operator+(const Vector3D& segundo_vector) const;
  double operator*(const Vector3D& segundo_vector) const;
  Vector3D MultiplyVector(const double kMultiplier);
  double Module();
 private:
  double coordenada_x_;
  double coordenada_y_;
  double coordenada_z_;  
};

std::ostream& operator<<(std::ostream& kOutput, const Vector3D& vector1);

#endif
