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

class Cuenta {
 public: 
  Cuenta(std::string titular, std::string numero_cuenta, long double saldo_en_cuenta) {
    nombre_titular_ = titular;
    numero_cuenta_ = numero_cuenta;
    saldo_cuenta_ = saldo_en_cuenta;
  }
  // 3 Getters
  std::string nombre_titular() const { return nombre_titular_; }
  std::string numero_cuenta() const { return numero_cuenta_; }
  long double saldo_cuenta() const { return saldo_cuenta_; }
  void MostrarInformacionDeCuenta() const {
    std::cout << "El titular de la cuenta es: " << nombre_titular() << '\n';
    std::cout << "El numero de cuenta es: " << numero_cuenta() << '\n';
    std::cout << "El saldo de la cuenta es: " << saldo_cuenta() << '\n';
  }
  void ModificarSaldo(long double suma_dinero) {
    long double saldo_cuenta_copy = saldo_cuenta_;
    if ((saldo_cuenta_copy += suma_dinero) < 0) {
      std::cout << "No se puede hacer la operación.\n";
    }
    else {
      saldo_cuenta_ += suma_dinero;
    }
  }
 private:
  std::string nombre_titular_;
  std::string numero_cuenta_;
  long double saldo_cuenta_;
};

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
void MenuUtilizacion() {
  std::cout << "\nMenu:\n1 - Información cuenta\n2 - Ingreso\n3" 
               "- Retirada\n4 - Salir\nIngrese el numero de operación:\n\n";
}
int main(int argc, char* argv[]) {
  MenuUtilizacion();
  Cuenta primera_cuenta{"Pepito Perez", "12345", 400.50};
  Cuenta segunda_cuenta{"Lionel Messi", "10193", 10456.89};
  Cuenta tercera_cuenta{"Catalina Catalona", "98765", 965.4532};
  std::string operacion, nombre_titular;
  long double suma_dinero;
  std::cin >> operacion;
  if (operacion == "4") {
    return 1;
  }
  std::cout << "Ingrese su nombre y apellido, sin espacios\n";
  std::cin >> nombre_titular;
  if (nombre_titular == "PepitoPerez") {
    if (operacion == "1") {
      primera_cuenta.MostrarInformacionDeCuenta(); 
    }
    if (operacion == "2" || operacion == "3") {
      std::cout << "\nIngrese suma de dinero a ingresar/depositar.\n"
                   "Si la cantidad es a ingresar, el número tiene que ser"
                   " positivo. Si es un retiro, el número debe ser negativo.\n";
      std::cin >> suma_dinero;
      std::cout << "El saldo anterior es " << primera_cuenta.saldo_cuenta() << " U.M.\n";
      primera_cuenta.ModificarSaldo(suma_dinero);
      std::cout << "Ahora el saldo está en " << primera_cuenta.saldo_cuenta() << " U.M.\n";
    } 
  }
  if (nombre_titular == "LionelMessi") {
    if (operacion == "1") {
      segunda_cuenta.MostrarInformacionDeCuenta(); 
    }
    if (operacion == "2") {
      std::cout << "\nIngrese suma de dinero a ingresar/depositar.\n"
                   "Si la cantidad es a ingresar, el número tiene que ser"
                   " positivo. Si es un retiro, el número debe ser negativo.\n";
      std::cin >> suma_dinero;
      std::cout << "El saldo anterior es " << segunda_cuenta.saldo_cuenta() << " U.M.\n";
      segunda_cuenta.ModificarSaldo(suma_dinero);
      std::cout << "Ahora el saldo está en " << segunda_cuenta.saldo_cuenta() << " U.M.\n";
    } 
  }
  if (nombre_titular == "CatalinaCatalona") {
    if (operacion == "1") {
      tercera_cuenta.MostrarInformacionDeCuenta(); 
    }
    if (operacion == "2") {
      std::cout << "\nIngrese suma de dinero a ingresar/depositar.\n"
                   "Si la cantidad es a ingresar, el número tiene que ser"
                   " positivo. Si es un retiro, el número debe ser negativo.\n";
      std::cin >> suma_dinero;
      std::cout << "El saldo anterior es " << tercera_cuenta.saldo_cuenta() << " U.M.\n";
      tercera_cuenta.ModificarSaldo(suma_dinero);
      std::cout << "Ahora el saldo está en " << tercera_cuenta.saldo_cuenta() << " U.M.\n";
    } 
  }
  return 0;
}