#ifndef ESPRESS_GUARD
#define ESPRESS_GUARD
#include "Beverage.h"
#include <string>
class Espresso: public Beverage{
	public:
		Espresso(){
			description = "Espression";
		}
		double cost(){
			return 2.0;
		}
		~Espresso(){}
};


#endif