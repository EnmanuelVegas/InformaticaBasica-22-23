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

#include "date_class.h"
#include "tools.h"


int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    exit (1);
  }
  std::string dia_cadena{argv[1]}, mes_cadena{argv[2]}, año_cadena{argv[3]};
  int dia_entero{stoi(dia_cadena)}, mes_entero{stoi(mes_cadena)}, año_entero{stoi(año_cadena)};
  if(is_valid_date(dia_entero, mes_entero, año_entero)) {
    Date fecha{dia_entero, mes_entero, año_entero};
    std::cout << "\nLa fecha introducida es: " << fecha.dia() << "/";
    std::cout << fecha.mes() << "/" << fecha.año() << '\n' << '\n';
    if (fecha.MesDeTreintaDias(fecha.mes())) {
      std::cout << "El mes introducido contiene 31 días. Si desea conocer los meses "
                   "que cumplen con esta\ncaracterística, son enero, marzo, mayo, julio"
                   ", agosto, octubre y diciembre.\n\n";
    }
    else {
      std::cout << "El mes introducido contiene 30 días. Si desea conocer los meses "
                   "que cumplen con\nesta característica, son febrero, abril, junio,"
                   " septiembre y noviembre.\n\n";
    }
  }
  else {
    std::cout << "\nNo es una fecha correcta. Pruebe con otra fecha.\n\n";
  }
  return 0;
}