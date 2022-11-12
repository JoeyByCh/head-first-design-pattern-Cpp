#ifndef BEVERAGE_GUARD
#define BEVERAGE_GUARD
#include <string>
class Beverage{
	protected:
		std::string description = "Unknown Beverage";
	public:
		virtual ~Beverage() = 0;
		virtual double cost() = 0;
		virtual std::string getDescription(){
			return description;
		}
};
Beverage::~Beverage(){}
#endif