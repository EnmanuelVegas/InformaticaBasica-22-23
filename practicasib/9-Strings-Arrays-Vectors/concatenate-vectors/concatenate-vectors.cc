/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Enmanuel Vegas alu0101281698@ull.edu.es
  * @date Nov 2022
  * @brief Programa para crear un vector de tamaño n, que contenga valores
  * aleatorios.
  * @bug There are no known bugs.
  */

// https://stackoverflow.com/questions/201718/concatenating-two-stdvectors

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void Usage(int argc, char* argv []);
std::vector<double> GetVector1(char* argv[]);
std::vector<double> GetVector2(int first_vector_size, char* argv[]);

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::vector<double> first_vector = GetVector1(argv);
  int first_vector_size = first_vector.size();
  std::vector<double> second_vector = GetVector2(first_vector_size, argv);
  for (const auto& value : first_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  for (const auto& value : second_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  first_vector.insert(first_vector.end(), second_vector.begin(), second_vector.end());
  for (const auto& value : first_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl; 
  return 0;
}
/**
 * Completa el primer vector de acuerdo a los valores del parámetro.
 *
 * @param vector argv, del que se extraerán los valores.
 * @return vector de tipo double.
 */
std::vector<double> GetVector1(char* argv[]) {
  std::string size = argv[1];
  int size_int = stoi(size);
  std::vector<double> input_vector(size_int);
  for (int i{2}; i < size_int + 2; ++i) {
    std::string vector_component = argv[i];
    double vector_component_double = stod(vector_component);
    input_vector.at(i - 2) = vector_component_double;
  }
  return input_vector;
}
/**
 * Completa el segundo vector de acuerdo a los valores del parámetro.
 *
 * @param tamaño del primer vector, y vector argv, del que se extraerán los valores.
 * @return vector de tipo double.
 */
std::vector<double> GetVector2(int first_vector_size, char* argv[]) {
  int start{2 + first_vector_size};
  std::string size = argv[start];
  int size_int = stoi(size);
  std::vector<double> input_vector(size_int);
  int vector_position{0};
  for (int i{start}; i < size_int + start; ++i) {
    std::string vector_component = argv[i];
    double vector_component_double = stod(vector_component);
    input_vector.at(vector_position) = vector_component_double;
    ++vector_position;
  }
  return input_vector;
}
/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
void Usage(int argc, char* argv[]) {
  if (argc == 1) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << "varios parámetros, siendo el primero el número de elementos ";
    std::cout << "que tendrá cada vector, seguido de los componentes del mismo." << std::endl;
  }
}
