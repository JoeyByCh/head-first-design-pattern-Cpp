#ifndef MOCHA_GUARD
#define MOCHA_GUARD
#include <string>
#include "CondimentDecorator.h"
class Mocha: public CondimentDecorator{
	public:
		Mocha(Beverage *b){
			beverage = b;
		}
		std::string getDescription(){
			return beverage->getDescription() + ", Mocha";
		}
		double cost(){
			return beverage->cost() + 0.5;
		}
	
};


#endif