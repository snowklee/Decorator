#include "houseblend.h"

HouseBlend::HouseBlend() {
    description = new char [200];
    strcpy(description, "House Blend Coffee");
}

double HouseBlend::cost() {
       return 140;
}
