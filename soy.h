#pragma once
#include "condimentdecorator.h"
#include "beverage.h"

class Soy : public CondimentDecorator {
public:
       Beverage *beverage;
       Soy(Beverage *beverage);
       char* getDescription(Beverage*);
       double cost();
};             
    
