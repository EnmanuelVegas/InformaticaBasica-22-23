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
#include <fstream>
#include <string>

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
bool Usage(const int argc, char* argv[]) {
  int numero_de_parametros{2};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetros." << '\n';
    return false;
  }
  return true;
}

/**
 * This functions deletes all punctuasion symbols in a string.
 *
 * @param word that is wished to be cleaned from punctuation symbols
 * 
 *
 */
void PunctEraser(std::string &word) {
  for (int i{0}; i < word.length(); ++i ) {
    if (ispunct(word[i])) {
      word.erase(i, 1);
    }
  }
}
/**
 * This functions counts all vowels and consonants in a string.
 *
 * @param word that is wished to be cleaned from punctuation symbols
 * 
 *
 */
void CharacterCount(const std::string &word, int &vowels_counter, int &consonant_counter) {
  for (auto character : word) {
    if (character == 'a' || character == 'A' || character == 'e' || character == 'E' ||
        character == 'i' || character == 'I' || character == 'o' || character == 'O' || 
        character == 'u' || character == 'U') {
      ++vowels_counter;
    }
    else {
      ++consonant_counter;
    }
  }
}
int main(int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  std::ifstream input_file{argv[1]};
  if (!input_file) {
    std::cout << "File could not be found.\n";
    return 1;
  } 
  std::string word{""};
  int total_vowels{0}, total_consonants{0};
  std::string most_vowels{""}, most_consonants{""};
  while (input_file >> word) {
    int vowels_counter{0}, consonant_counter{0};    
    PunctEraser(word);
    CharacterCount(word, vowels_counter, consonant_counter);
    if (vowels_counter > total_vowels) {
      most_vowels = word;
      total_vowels = vowels_counter;
    }
    if (consonant_counter > total_consonants) {
      most_consonants = word;
      total_consonants = consonant_counter;
    }
  }
  std::cout << "La palabra \"" << most_vowels << "\" es la que más vocales tiene,";
  std::cout << " con un total de " << total_vowels << "." << std::endl; 
  std::cout << "La palabra \"" << most_consonants << "\" es la que más consonantes";
  std::cout << " tiene, con un total de " << total_consonants << ".";
  std::cout << std::endl;   
  return 0;
}