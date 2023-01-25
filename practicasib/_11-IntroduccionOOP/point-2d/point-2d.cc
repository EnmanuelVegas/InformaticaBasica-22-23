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
#include <cmath>

#include "point-2d_class.h"

/**
 * Imprime en pantalla el uso correcto del programa.
 * @param valor del contador de argumentos y el vector que los contiene.
 * @return booleano sobre si el programa se ha ejecutado correctamente.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{4};
  if (argc < numero_de_parametros || argc > 6) {
    std::cout << "\nEl programa " << argv[0] << " ha sido ejecutado de forma incorrecta. ";
    std::cout << "El uso del programa es el siguiente (usando la linea de comandos):\n\n"
                 ".\\point-2d operacion coordenada-x-primer-punto coordenada-y-primer-punto "
                 "coordenada-x-segundo-punto coordenada-y-segundo-punto\n\n"
                 "Las operaciones son:\n1 = Mostrar coordenadas del punto 1\n"
                 "2 = Mover coordenadas del punto 1 a las del punto 2\n3 = Calcular la distan"
                 "cia entre 2 puntos\n4 = Calcular el punto medio entre 2 puntos\n\n";
    return false;
  }
  return true;
} 

/** Declaración de la clase Point2D. 
 *  La clase se implementa en este mismo fichero, en lugar de hacerlo en otro
 *  separado (como debería)
*/
class Point2D {
 public:
  Point2D(double primer_numero = 1.00, double segundo_numero = 1.00) {
    coordenadas_x_ = primer_numero;
    coordenadas_y_ = segundo_numero;
  }
/**
 * Imprime en pantalla las coordenadas del punto deseado.
 * @param sin parámetros.
 */
  void ImprimirCoordenadasDelPunto() {
    std::cout << "Coordenadas del punto: " "(" << coordenadas_x_ << ", ";
    std::cout << coordenadas_y_ << ")\n";
  }
/**
 * Asigna nuevas coordenadas al punto deseado.
 * @param referencia al punto con el que se quieren reemplazar las coordenadas.
 */
  void Mover(Point2D segundo_punto) {
    coordenadas_x_ = segundo_punto.coordenadas_x_;
    coordenadas_y_ = segundo_punto.coordenadas_y_;
  }
/**
 * Calcula el valor de la distancia entre 2 puntos.
 * @param referencia al punto con el que se quiere calcular la distancia.
 * @return double correspondiente a la distancia entre los 2 puntos.
 */
  double Distancia(const Point2D& segundo_punto) const {
    double diferencia_coordenadas_x{segundo_punto.coordenadas_x_ - coordenadas_x_};
    double diferencia_coordenadas_y{segundo_punto.coordenadas_y_ - coordenadas_y_};
    return sqrt((diferencia_coordenadas_x * diferencia_coordenadas_x) + (diferencia_coordenadas_y * diferencia_coordenadas_y));
  }  
/**
 * Calcula el punto medio entre 2 pares de coordenadas.
 * @param referencia al punto con el que se quiere calcular la distancia.
 */
  Point2D PuntoMedio(Point2D segundo_punto) {
    double coordenadas_media_x{(coordenadas_x_ + segundo_punto.coordenadas_x_) / 2};
    double coordenadas_media_y{(coordenadas_y_ + segundo_punto.coordenadas_y_) / 2};
    Point2D punto_medio{coordenadas_media_x, coordenadas_media_y};
    return punto_medio;
  }
 private:
  double coordenadas_x_;
  double coordenadas_y_;
};

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    std::cout << "El programa no se ejecutó correctamente.\n\n";
    return 1;
  }
  std::string operacion{argv[1]};
  std::string primer_punto_x_cadena{argv[2]}, primer_punto_y_cadena{argv[3]},
  segundo_punto_x_cadena, segundo_punto_y_cadena;
  if (operacion == "1") {
    segundo_punto_x_cadena = "0", segundo_punto_y_cadena = "0";
  }
  else {
    segundo_punto_x_cadena = argv[4], segundo_punto_y_cadena = argv[5];
  }
  double primer_punto_x, primer_punto_y, segundo_punto_x, segundo_punto_y;
  primer_punto_x = stod(primer_punto_x_cadena);
  primer_punto_y = stod(primer_punto_y_cadena);
  segundo_punto_x = stod(segundo_punto_x_cadena);
  segundo_punto_y = stod(segundo_punto_y_cadena);
  Point2D primer_punto{primer_punto_x, primer_punto_y}; 
  Point2D segundo_punto{segundo_punto_x, segundo_punto_y};
  if (operacion == "1") {
    primer_punto.ImprimirCoordenadasDelPunto();
  }
  if (operacion == "2") {
    std::cout << "Antes: ";
    primer_punto.ImprimirCoordenadasDelPunto();
    primer_punto.Mover(segundo_punto);
    std::cout << "Ahora: "; 
    primer_punto.ImprimirCoordenadasDelPunto();
  }
  if (operacion == "3") {
   std::cout << "La distancia entre los puntos es: " << primer_punto.Distancia(segundo_punto);
   std::cout << " unidades.\n";
  }
  if (operacion == "4") {
    Point2D punto_medio = primer_punto.PuntoMedio(segundo_punto);
    std::cout << "El punto medio ha sido calculado. ";
    punto_medio.ImprimirCoordenadasDelPunto();
  }
  return 0;
}