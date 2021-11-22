#include "mocha.h"

Mocha::Mocha(Beverage *beverage) {
    this->beverage = beverage;
}            

char* Mocha::getDescription(Beverage*) {
      char *str = beverage->getDescription();
      strcpy(str, ", Mocha");
      return str;     
}

double Mocha::cost() {
       return beverage->cost() + 20.0;
}
