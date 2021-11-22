#pragma once
#include "condimentdecorator.h"
#include "beverage.h"

class Whip : public CondimentDecorator {
public:
       Beverage *beverage;
       Whip(Beverage *beverage);
       char* getDescription(Beverage*);
       double cost();
};             
    
