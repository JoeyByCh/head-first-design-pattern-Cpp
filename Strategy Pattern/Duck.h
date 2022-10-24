#ifndef DUCK_GUARD
#define DUCK_GUARD
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck{
public:
	FlyBehavoir *flybehavior;
	QuackBehavior *quackbehavior;
	virtual ~Duck() = 0;
	void performFly();
	void performQuack();
	
	void setFlyBehavoir(FlyBehavoir*);
	void setQuackBehavior(QuackBehavior*);
	
	virtual void swim();
	virtual void display();
	
};

class MallardDuck: public Duck{
public:
	MallardDuck();
	virtual void display();
};

class ModelDuck: public Duck{
public:
	ModelDuck();
	virtual void display();
};

#endif