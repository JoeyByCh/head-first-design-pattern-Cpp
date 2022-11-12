#ifndef WHIP_GUARD
#define WHIP_GUARD
#include <string>
#include "CondimentDecorator.h"
class Whip: public CondimentDecorator{
	public:
		Whip(Beverage *b){
			beverage = b;
		}
		std::string getDescription(){
			return beverage->getDescription() + ", Whip";
		}
		double cost(){
			return beverage->cost() + 0.33;
		}
	
};


#endif