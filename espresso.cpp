#include "espresso.h"

Espresso::Espresso() {
    description = new char [200];
    strcpy(description, "Espresso Coffee");
}

double Espresso::cost() {
       return 145;
}
