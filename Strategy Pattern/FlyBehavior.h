#ifndef FLYBEHAVIOR_GUARD
#define FLYBEHAVIOR_GUARD

class FlyBehavoir{
public:
	virtual void fly() = 0;
	virtual ~FlyBehavoir() = 0;
};

class FlyWithWings: public FlyBehavoir{
public:
	virtual void fly();
};

class FlyNoWay: public FlyBehavoir{
public:
	virtual void fly();
};

class FlyRocketPowered: public FlyBehavoir{
public:
	virtual void fly();
};

#endif