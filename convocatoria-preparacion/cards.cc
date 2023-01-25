#include<iostream>
#include<fstream>
#include<vector>


class Card {
 public:
  Card (const std::string palo, const int numero) : palo_{palo}, numero_{numero} {}
  friend std::istream& operator>>(std::istream& os, Card& carta) { 
    os >> carta.numero_;
    os >> carta.palo_;
    return os;
  }
  bool operator>(const Card& carta);
  std::string palo() const { return palo_; }
  int numero() const { return numero_; }
 private:
  std::string palo_;
  int numero_;
};

bool Card::operator>(const Card& segunda_carta){
  if(this->palo() != segunda_carta.palo()){
    if(this->palo() == "oro"){
      return true;
    }
    if(segunda_carta.palo() == "oro"){
      return false;
    }
    if(this->palo() == "copa"){
      return true;
    }
    if(segunda_carta.palo() == "copa"){
      return false;
    }
    if(this->palo_ == "espadas"){
      return true;
    }
    if(segunda_carta.palo() == "espadas"){
      return false;
    }
    if(this->palo() == "bastos"){
      return true;
    }
    if(segunda_carta.palo() == "bastos"){
      return false;
    }
  }
  return this->numero_ > segunda_carta.numero();
}

int main() {
  std::ofstream output{"fichero.txt"};
  std::vector<std::string> posibles_palos_cartas {"oro", "copa", "espadas", "bastos"};
  for(int i = 0; i < posibles_palos_cartas.size(); ++i){
    for(int j = 1; j <= 12; ++j){
      Card carta(posibles_palos_cartas[i], j);
      output << carta.palo() << " " << carta.numero() << std::endl;
    }
  }
  Card carta1("copa", 4);
  Card carta2("espadas", 8);
  if(carta1 > carta2){
    std::cout << "si" << std::endl;
  }
  return 0;
}