#pragma once
#include "condimentdecorator.h"
#include "beverage.h"

class Mocha : public CondimentDecorator {
public:
       Beverage *beverage;
       Mocha(Beverage *beverage);
       char* getDescription(Beverage*);
       double cost();
};             
    
