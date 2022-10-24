#include "QuackBehavior.h"
#include<iostream>
using std::cout;
using std::endl;

QuackBehavior:: ~QuackBehavior() {}

void Quack:: quack(){
	cout<<"Quack!"<<endl;
}

void MuteQuack:: quack(){
	cout<<"<< Silence >>"<<endl;
}

void Squeak:: quack(){
	cout<<"Squeak!"<<endl;
}

