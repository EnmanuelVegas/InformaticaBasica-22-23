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

// help: https://stackoverflow.com/questions/42685506/c11-mersenne-twister-produces-same-value-every-time
// https://www.learncpp.com/cpp-tutorial/generating-random-numbers-using-mersenne-twister/
// https://stackoverflow.com/questions/22923551/generating-number-0-1-using-mersenne-twister-c
// https://www.geeksforgeeks.org/stdmt19937-class-in-cpp/

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

void Usage(int argc, char* argv []);
int StringToInt(std::string string);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);
double ReduceSum(std::vector<double> vector_a_sumar);
void ComputeMinMaxAvg(std::vector<double> my_vector, double& max_vector, double& min_vector, 
     double& average_vector);

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int size = StringToInt(argv[1]);
  int lower = StringToInt(argv[2]);
  int upper = StringToInt(argv[3]);
  std::vector<double> my_vector = GenerateVector(size, lower, upper);
  std::cout << "Componentes del vector " << std::endl;
  for (const auto& value: my_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  double max_vector{0.0};
  double min_vector {0.0};
  double average_vector{0.0};
  ComputeMinMaxAvg(my_vector, max_vector, min_vector, average_vector);
  std::cout << "Máximo, mínimo y promedio de los componentes del vector generado" << std::endl;
  std::cout << max_vector << " " << min_vector << " " << average_vector << std::endl;
  return 0;
}

/**
 * Imprime en pantalla el uso correcto del programa.
 *
 * @param valor del contador de argumentos y el vector que los contiene.
 */
void Usage(int argc, char* argv [0]) {
  int numero_de_parametros{4};
  if (argc != numero_de_parametros) {
    std::cout << "El programa " << argv[0] << " tiene que ser llamado aportando ";
    std::cout << numero_de_parametros - 1 << " parámetros." << std::endl;
  }
}

/**
 * Transforma los strings aportados a enteros.
 *
 * @param Cadena proveniente de los argumentos que se aportan al programa.
 * @return Valor numérico entero.
 */
int StringToInt(std::string string) { 
  int value_int = stoi(string);
  return value_int;
}

/**
 * Calcula una serie de números aleatorios y los almacena en el vector de tamaño
 * "size".
 *
 * @param tamaño deseado del vector, limite inferior de los valores aleatorios,
 * limite superior de los valores aleatorios.
 * @return Vector de tipo double con valores generados aleatoriamente.
 */ 
std::vector<double> GenerateVector(const int size, const double lower, const
double upper) {
  std::vector<double> my_vector(size);
  //std::uniform_real_distribution<double> unif(lower, upper);
  //std::default_random_engine random_engine;
  //for (int i{0}; i <= size - 1; ++i) { 
    //double a_random_double = unif(random_engine);
    //my_vector.at(i) = a_random_double;
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> unif(lower, upper);
  for (auto& value: my_vector) { 
    double a_random_double = unif(rd);
    value = a_random_double;
  }
  return my_vector;
}

/**
 * Calcula el máximo, el mínimo y el promedio de los elementos del vector.
 * @param Vector de tipo double, punteros a los valores Maximo, Mínimo y Promedio. 
 */ 
void ComputeMinMaxAvg(std::vector<double> my_vector, double& max_vector, double& min_vector, 
     double& average_vector) {
  max_vector = *std::max_element(my_vector.begin(), my_vector.end());
  min_vector = *std::min_element(my_vector.begin(), my_vector.end());
  average_vector = std::accumulate(my_vector.begin(), my_vector.end(), 0.0) / my_vector.size();
}
