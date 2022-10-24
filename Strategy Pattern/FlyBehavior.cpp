#include "FlyBehavior.h"
#include<iostream>
using std::cout; using std::endl;

FlyBehavoir:: ~FlyBehavoir() {}

void FlyWithWings:: fly(){
	cout<<"I'm flying!!"<<endl;
}
void FlyNoWay:: fly(){
	cout<<"I can't fly"<<endl;
}

void FlyRocketPowered:: fly(){
	cout<<"I'm flying with a rocket!"<<endl;
}