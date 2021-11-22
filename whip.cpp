#include "whip.h"

Whip::Whip(Beverage *beverage) {
    this->beverage = beverage;
}            

char* Whip::getDescription(Beverage*) {
      char *str = beverage->getDescription();
      strcpy(str, ", Whip");
      return str;     
}

double Whip::cost() {
       return beverage->cost() + 15.0;
}
