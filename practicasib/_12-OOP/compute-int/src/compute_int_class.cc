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
#include <string>

#include "compute_int_class.h"

/**
* Determina el factorial del número aportado.
* @return unsigned long long correspondiente al factorial resultante.
*/
unsigned long long int ComputeInt::CalcularFactorial() {
  unsigned long long int resultado_factorial{1};
    for (int i{numero_a_tratar()}; i > 0; --i) {
      resultado_factorial *= i;
    }
  return resultado_factorial;
}

/**
* Calcula la suma de los primeros n términos.
* @return entero correspondiente a la suma de los primeros n términos.
*/
int ComputeInt::CalcularSumaPrimerosTerminos() {
  int limite_serie{numero_a_tratar()};
  int suma_serie{0};
  for (int i{1}; i <= limite_serie; ++i) {
    suma_serie += i;
  }
  return suma_serie;
}

/**
* Determina si el número aportado es primo.
* @param entero correspondiente al número primo, si se aporta (véase el método
* ComputeInt::DeterminarPrimoPerfecto()).
* @return valor booleano para determinar si cumple con esa característica.
*/
bool ComputeInt::DeterminarPrimo(int numero) {
  if (numero_a_tratar() == 1 || numero_a_tratar() == 0) {
    return false;
  }
  for (int i{2}; i <= sqrt(numero_a_tratar()); i++) {
    if (numero_a_tratar() % i == 0) {
      return false; 
    }
  }
  return true;
}

/**
* Determina si número es primo perfecto.
* @return valor booleano para determinar si cumple con esa característica.
*/
bool ComputeInt::DeterminarPrimoPerfecto() {
  int numero_primo_actual{numero_a_tratar()};  
  int numero_primo_anterior{0};
  while (numero_primo_actual != numero_primo_anterior) {
    if (DeterminarPrimo(numero_primo_actual)) {
      numero_primo_anterior = numero_primo_actual;
      int numero_primo_nuevo{0};
      while (numero_primo_actual != 0) {
        numero_primo_nuevo += (numero_primo_actual % 10);
        numero_primo_actual = (numero_primo_actual / 10);
      }
      numero_primo_actual = numero_primo_nuevo; 
    }
    else {
      return 0;
    }
  }
  return 1;  
}

/**
* Determina si el número es primo relativo con respecto a otro aportado mediante
* parámetros.
* @param entero correspondiente al número con el que se quiere comparar.
* @return valor booleano para determinar si cumple con esa característica.
*/
bool ComputeInt::DeterminarPrimoRelativo(int segundo_numero) {
  int numero_limite{std::max(numero_a_tratar(), segundo_numero)};
  for (int i{2}; i <= numero_limite; ++i ) {
    if ((numero_a_tratar() % i) == 0 && (segundo_numero % i) == 0) {
      return false;        
    }
  }
  return true;
}

/**
* @brief Determina si el número es especial Esto es, si la suma de los dígitos en 
*   posiciones pares es igual a la suma de los dígitos en posiciones impares.
* @return valor booleano para determinar si cumple con esa característica.
*/
bool ComputeInt::EsEspecial() {
  int numero{numero_a_tratar()};
  int contador_digitos{0}, posicion_digitos{1};
  int suma_digitos_pares{0}, suma_digitos_impares{0}, digito_extraido{0};
  int numero_copia{numero};
  std::string numero_string{std::to_string(numero)};
  //std::cout << numero_string;
  while(numero != 0) {
    if (posicion_digitos % 2 == 1) {
      std::string digito_string{numero_string[posicion_digitos - 1]};
      int digito_extraido{stoi(digito_string)};
      suma_digitos_impares += digito_extraido;
    }
    else {
      std::string digito_string{numero_string[posicion_digitos - 1]};
      int digito_extraido{stoi(digito_string)};
      suma_digitos_pares += digito_extraido;
    }
    ++posicion_digitos;
    numero /= 10;
  }
  if (suma_digitos_pares == suma_digitos_impares) {
    return true;
  }
  else {
    return false;
  }
  return false;
}