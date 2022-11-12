#ifndef CONDIMENTDECORATOR_GUARD
#define CONDIMENTDECORATOR_GUARD
#include <string>
#include "Beverage.h"

class CondimentDecorator: public Beverage{
	protected:
		Beverage *beverage = nullptr;
	public:
		// virtual std::string getDescription() = 0;
};

#endif