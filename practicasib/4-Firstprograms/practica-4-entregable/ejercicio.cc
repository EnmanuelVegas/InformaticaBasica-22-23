#include <iostream>


int main () {

int p{2}, v{3}, r;
   r = p;
   v = r;
   r = v;
  v = p;
  p = v;

  std::cout << p << v << std::endl;
}
