#include <iostream>
using namespace std;

bool is_guay(int n) {
  int contador_posicion{1};
  int sum_odd_digits = 0;
  while (n > 0) {
    if (contador_posicion % 2 == 1) {
      sum_odd_digits += (n % 10);
      std::cout << n % 10 << std::endl;
    }
    ++contador_posicion;
    n /= 10;
  }
  return sum_odd_digits % 2 == 0;
}

int main() {
    int n;
    cin >> n;
    if (is_guay(n)) {
        cout << n << " es GUAY" << endl;
    } else {
        cout << n << " no es GUAY" << endl;
    }
    return 0;
}

