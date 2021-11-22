#include "soy.h"

Soy::Soy(Beverage *beverage) {
    this->beverage = beverage;
}            

char* Soy::getDescription(Beverage*) {
      char *str = beverage->getDescription();
      strcpy(str, ", Soy");
      return str;     
}

double Soy::cost() {
       return beverage->cost() + 10.0;
}
