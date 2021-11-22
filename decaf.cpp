#include "decaf.h"

Decaf::Decaf() {
    description = new char [200];
    strcpy(description, "Decaf Coffee");
}

double Decaf::cost() {
       return 165;
}
