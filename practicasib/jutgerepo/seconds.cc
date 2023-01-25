#include <iostream>

  int main () {
  int years, days, hours, minutes, seconds;
  std::cin >> years >> days >> hours >> minutes >> seconds;
  std::cout << (seconds + 60 * ( minutes + 60 * ( hours + (24 * (days + (years * 365))))))  << std::endl;
  return 0;
}
