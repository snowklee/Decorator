#include "milk.h"

Milk::Milk(Beverage *beverage) {
    this->beverage = beverage;
}            

char* Milk::getDescription(Beverage*) {
      char *str = beverage->getDescription();
      strcpy(str, ", Milk");
      return str;     
}

double Milk::cost() {
       return beverage->cost() + 15.0;
}
       
                         
