#include "darkroast.h"

DarkRoast::DarkRoast() {
    description = new char [200];
    strcpy(description, "Dark Roast Coffee");
}

double DarkRoast::cost() {
       return 160;
}
