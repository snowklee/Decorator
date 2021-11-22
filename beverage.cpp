#include "beverage.h"

Beverage::Beverage() {
    description = new char [200];
    strcpy(description, "Unknown Beverage");
}

char* Beverage::getDescription() {
      return description;
}        
