#include "Duck.h"
#include<iostream>
using std::cout;
using std::endl;

Duck:: ~Duck() {}

void Duck:: performQuack(){
	quackbehavior->quack();
}

void Duck:: performFly(){
	flybehavior->fly();
}

void Duck:: setFlyBehavoir(FlyBehavoir* fb){
	flybehavior = fb;
}

void Duck:: setQuackBehavior(QuackBehavior* qb){
	quackbehavior = qb;
}


void Duck:: swim(){
	cout<<"I'm siwmming!"<<endl;
}

void Duck:: display(){
	cout<<"I'm a duck"<<endl;
}

MallardDuck:: MallardDuck(){
	quackbehavior = new Quack();
	flybehavior = new FlyWithWings();
}

void MallardDuck:: display(){
	cout<<"I'm a real Mallard duck"<<endl;
}


ModelDuck:: ModelDuck(){
	quackbehavior = new Quack();
	flybehavior = new FlyNoWay();
}

void ModelDuck:: display(){
	cout<<"I'm a model duck"<<endl;
}

