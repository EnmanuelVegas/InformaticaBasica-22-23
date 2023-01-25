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

/**
 * Imprime en pantalla el uso correcto del programa.
 * @param valor del contador de argumentos y el vector que los contiene.
 * @return booleano sobre si el programa se ha ejecutado correctamente.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{7};
  if (argc != numero_de_parametros) {
    std::cout << "\nEl programa " << argv[0] << " ha sido ejecutado de forma incorrecta. ";
    std::cout << "El uso del\nprograma es el siguiente (usando la linea de comandos):\n\n"
                 ".\\circulo radio coordenada-x-centro coordenada-y-centro color "
                 "coordenada-x-punto-exterior coordenada-y-punto-exterior\n\n"
                 "Las opciones para el color son:\n0 = rojo\n1 = azul\n2 = verde\n"
                 "3 = amarillo\n\n";
    return false;
  }
  return true;
} 

/** Declaración de la clase Circulo. 
*  La clase se implementa en este mismo fichero, en lugar de hacerlo en otro
*  separado (como debería)
*/
class Circulo {
 public:
  enum class Color {
    rojo,
    azul,
    verde,
    amarillo,
  };
  // Constructor aquí:
  Circulo(double radio = 1.00, double centro_coordenada_x = 1.00, double centro_coordenada_y = 1.00,
  Circulo::Color color = static_cast<Circulo::Color>(0)) {
    radio_ = radio;
    centro_x_ = centro_coordenada_x;
    centro_y_ = centro_coordenada_y;
    color_ = color;
  }
  /**
  * Calcula el valor del área del círculo especificado.
  * @return double correspondiente al área del círculo.
  */
  double Area() {
    const double KPi{3.141519};
    return (radio_ * radio_ * KPi);
  }
  /**
  * Calcula el valor del perímetro del círculo especificado.
  * @return double correspondiente al perímetro del círculo.
  */
  double Perimetro() {
    const double KPi{3.141519};
    return (radio_ * 2 * KPi);
  }
  /**
  * Imprime en pantalla las características del circulo.
  *  */
  void ImprimirCaracteristicas() {
    std::cout << "Radio del círculo " << radio_ << '\n';
    std::cout << "Centro del circulo: (" << centro_x_ << ", " << centro_y_ << ")\n";
    std::cout << "Área del círculo: " << Area() <<  " unidades.\n";
    std::cout << "Perímetro del círculo: " << Perimetro() << " unidades.\n";
    std::cout << "Color del circulo: ";
    switch (static_cast<int>(color_)) {
      case 0:
        std::cout << "Rojo.";
      case 1:
        std::cout << "Azul.";
      case 2:
        std::cout << "Verde.";
      case 3:
        std::cout << "Amarillo.";
    }
    std::cout << std::endl;
  }
  /**
  * Determina si un punto está dentro del circulo especificado.
  * @return double correspondiente al perímetro del círculo.
  */
  bool EsInterior(const double& coordenada_x, const double& coordenada_y) {
    double distancia{(coordenada_x - centro_x_) * (coordenada_x - centro_x_) + 
    (coordenada_y - centro_y_) * (coordenada_y - centro_y_)};
    if ((distancia <= radio_ * radio_)) {
      return true;
    }
    else {
      return false;
    }
  }
 private:
  double radio_;
  double centro_x_;
  double centro_y_;
  Color color_;
};

int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    exit (1);
  }
  std::string radio_cadena{argv[1]}, centro_cadena_x{argv[2]}, centro_cadena_y{argv[3]},
  color_cadena{argv[4]};
  double radio_circulo{stod(radio_cadena)}, centro_coordenada_x{stod(centro_cadena_x)}, 
  centro_coordenada_y{stod(centro_cadena_y)}; 
  int color_circulo{stoi(color_cadena)};
  Circulo::Color color{static_cast<Circulo::Color>(color_circulo)};
  Circulo mi_circulo{radio_circulo, centro_coordenada_x, centro_coordenada_y, color};
  std::cout << std::endl;
  mi_circulo.ImprimirCaracteristicas();
  std::string punto_coordenada_x{argv[5]}, punto_coordenada_y{argv[6]};
  double coordenada_x{stod(punto_coordenada_x)}, coordenada_y{stod(punto_coordenada_y)};
  if (mi_circulo.EsInterior(coordenada_x, coordenada_y)) {
    std::cout << "El punto (" << punto_coordenada_x << ", " << punto_coordenada_y << ")";
    std::cout  << " está dentro del circulo.\n\n";
  } 
  else {
    std::cout << "El punto (" << punto_coordenada_x << ", " << punto_coordenada_y << ")";
    std::cout  << " no está dentro del circulo.\n\n";
  }
  return 0;
}