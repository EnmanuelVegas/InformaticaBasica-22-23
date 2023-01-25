/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief 
  * @bug There are no known bugs.
  */

#include <iostream>
#include <string>
#include <fstream>

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
bool Usage(int argc, char* argv[]) {
  std::string segundo_parametro{argv[1]};  
  if (argc != 6 && segundo_parametro != "--help") {
    std::cout << "./cripto -- Cifrado de ficheros\nModo de uso: "
                 "./cripto fichero_entrada fichero_salida método password "
                 "operación\nPruebe ./cripto --help para más infor"
                 "mación\n";
    return 0;
  }
  if (segundo_parametro == "--help") {
    std::cout << "./cripto -- Cifrado de ficheros\n"
                 "Modo de uso: ./cripto fichero_entrada fichero_salida método password operación\n\n"
                 "fichero_entrada: Fichero a codificar\n"
                 "fichero_salida:  Fichero codificado\n"
                 "método:          Indica el método de encriptado\n"
                 "\t\t   1: Cifrado xor\n"
                 "\t\t   2: Cifrado de César\n"
                 "password:\tPalabra secreta en el caso de método 1, Valor de K en el método 2\n"
                 "operación:\tOperación a realizar en el fichero\n"
                 "\t\t   +: encriptar el fichero\n"
                 "\t\t   -: desencriptar el fichero\n";
    return 0;
  }
  return 1;
}
/**
 * Aplica la operación XOR con la constante 128 a cada carácter de la contraseña 
 * deseada
 * @param cadena que contiene la contraseña con la que se desea encriptar.
 */
void ModifyPassword(std::string &password) {
  for (int i{0}; i < password.size(); ++i ) {
    password[i] ^= 128;
  }
}
/**
 * Aplica la operación XOR a cada carácter del texto extraído del fichero, con la
 * finalidad de encriptarlo.
 * @param referencia al archivo del que se extraerá el texto.
 * @param referencia al archivo en el que se escribirá el resultado encritpdat.
 * @param cadena que contiene la contraseña con la que se desea encriptar.
 */
void EncriptFileXOR(std::ifstream &input_file, std::ofstream &output_file, std::string &password) {
  char new_character;
  int kPasswordSize = password.length();
  int index{0};
  while (input_file >> std::noskipws >> new_character) {
    new_character ^= password[index % kPasswordSize];
    output_file << new_character;
    ++index;
  }
}
/**
 * Aplica el cifrado césar a cada carácter del texto extraído del fichero.
 * @param referencia al archivo del que se extraerá el texto.
 * @param referencia al archivo en el que se escribirá el resultado encriptado.
 * @param cadena que contiene la contraseña con la que se desea encriptar, que
 * deberá ser una cadena con carácteres comprendidos entre el 0 y el 9.
 * @param cadena correspondiente al carácter '+' o '-', que dictará si se tiene
 * que encriptar o desencriptar el fichero, respectivamente.
 */
void EncryptFileCaesar(std::ifstream &input_file, std::ofstream &output_file, 
  std::string &password, std::string &operation) {
  int password_int = stoi(password);
  char character;
  char new_character;
  while(input_file >> std::noskipws >> character) {
    if (operation == "+") {
      new_character = character + password_int;
      if (character >= 'A' && character <= 'Z' && new_character > 'Z') {
        new_character = (new_character % 90) + 'A' - 1;
      }
      if (character >= 'a' && character <= 'z' && new_character > 'z') {
        new_character = (new_character % 122) + 'a' - 1;
      }
    }
    if (operation == "-") {
      new_character = character - password_int;
      if (character >= 'A' && character <= 'Z' && new_character < 'A') {
        new_character = 91 - (65 % new_character);
      }
      if (character >= 'a' && character <= 'z' && new_character < 'a') {
        new_character = 123 - (97 % new_character);
      }
    }
    output_file << new_character;
  }
}
int main(int argc, char* argv []) {
  if(!Usage(argc, argv)) {
    std::cerr << "Error en la ejecución del programa.\n";
    return 1;
  }
  std::string text_file{argv[1]}, final_file{argv[2]};
  std::string method{argv[3]}, password{argv[4]}, operation{argv[5]};
  std::ifstream input_file{text_file}; 
  std::ofstream output_file{final_file};
  if (!input_file) {
    std::cerr << "El archivo \"" << argv[1] << "\" no pudo ser localizado.";
    std::cout << '\n';
    return 1;
  }
  if (method == "xor") {
    ModifyPassword(password);
    EncriptFileXOR(input_file, output_file, password);
  } 
  if (method == "cesar") {
    EncryptFileCaesar(input_file, output_file, password, operation); 
  }
}