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

class Date {
   public:
    Date(int dia_funcion = 1, int mes_funcion = 1, int año_funcion = 1) {
      dia_ = dia_funcion;
      mes_ = mes_funcion;
      año_ = año_funcion;
    }
    int año() {return año_;}
    int mes() {return mes_;}
    int dia() {return dia_;}
    bool VerificarAño(int año) {
      if (año > 9999 || año < 1800) {
        return false;
      }
      return true;
    }
bool VerificarAñoBisiesto(int año) {
      if (año % 4 == 0) { 
        if (año % 100 != 0) {
          return true;
        } else if ((año / 100) % 4 == 0) {
          return true;
        } else {
            return false;
          }
      } else {
        return false;
      } 
    }
    bool VerificarMes(int mes) {
      if (mes > 12 || mes < 1) {
        return false;
      }
      return true;
    }
    bool MesDeTreintaDias(int mes) {
      if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return true;
      }
      return false;
    }
   private:
    int dia_;
    int mes_;
    int año_;
  };
  
bool is_valid_date(int dia_jutge, int mes_jutge, int año_jutge) {
  Date fecha{dia_jutge, mes_jutge, año_jutge};
  if (!fecha.VerificarAño(fecha.año())) {
    return false;
  }  
  if (fecha.VerificarAñoBisiesto(fecha.año())) {
    if (fecha.mes() == 2) {
      if (fecha.dia() > 29) {
        return false;
      }
    }
  }
  else {
    if (fecha.mes() == 2) {
      if (fecha.dia() > 28) {
        return false;
      }
    }
  }
  if (fecha.VerificarMes(fecha.mes())) {
    if (fecha.MesDeTreintaDias(fecha.mes())) {
      if (fecha.dia() > 31 || fecha.dia() < 1) {
        return false;
      }
    }
    else {
      if (fecha.dia() > 30 || fecha.dia() < 1) {
        return false;
      }
    }
  }
  else {
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  std::string dia_cadena{argv[1]}, mes_cadena{argv[2]}, año_cadena{argv[3]};
  int dia{stoi(dia_cadena)}, mes {stoi(mes_cadena)}, año{stoi(año_cadena)};
  if(is_valid_date(dia, mes, año)) {
    Date fecha{dia, mes, año};
  }
  else {
    std::cout << "No es una fecha correcta\n";
  } 
  return 0;
}





/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
/*
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{___};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetros." << '\n';
    return false;
  }
  return true;
}
/**
 * ....
 *
 * @param
 * @return
 * 
 *
 */ 



/*
int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }  



  return 0;
}
*/