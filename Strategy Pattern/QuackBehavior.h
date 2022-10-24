#ifndef QUACKBEHAVIOR_GUARD
#define QUACKBEHAVIOR_GUARD

class QuackBehavior{
public:
	virtual ~QuackBehavior() = 0;
	virtual void quack() = 0;
};

class Quack: public QuackBehavior{
public:
	virtual void quack();
};

class MuteQuack: public QuackBehavior{
public:
	virtual void quack();
};

class Squeak: public QuackBehavior{
public:
	virtual void quack();
};

#endif