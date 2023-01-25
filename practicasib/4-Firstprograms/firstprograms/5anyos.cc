#include <iostream>

int main () {
  
  std::cout << "Año de nacimiento? ";
  int year; const char* dot {"."}; const char* dots {":"};
  std::cin >> year;
  std::cout << "Tienes"<< dots << " " << 2022 - year << " años" << dot << std::endl;
  
return 0;

}

