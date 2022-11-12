#include <iostream>
using std::cout; using std::endl;
#include "Espresso.h"
#include "Mocha.h"
#include "Whip.h"

int main(int argc, char** argv) {
	Beverage *bev = new Espresso();
	cout<<bev->getDescription()<<endl;
	cout<<bev->cost()<<endl;
	
	CondimentDecorator *cd = new Mocha(bev);
	cout<<cd->getDescription()<<endl;
	cout<<cd->cost()<<endl;
	
	cd = new Mocha(cd);
	cout<<cd->getDescription()<<endl;
	cout<<cd->cost()<<endl;
	
	cd = new Whip(cd);
	cout<<cd->getDescription()<<endl;
	cout<<cd->cost()<<endl;
	
	return 0;
}