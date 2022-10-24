
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include "Duck.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void testFlyBehavoir(){
	FlyBehavoir *fb = new FlyWithWings();
	fb->fly();
	fb = new FlyNoWay();
	fb->fly();
}

void testQuackBehavoir(){
	QuackBehavior *qb = new Quack();
	qb->quack();
	qb = new MuteQuack();
	qb->quack();
	qb = new Squeak();
	qb->quack();
}

void testMallardDuck1(){
	MallardDuck md;
	md.performFly();
	md.performQuack();
	md.swim();
	md.display();
}

void testMallardDuck2(){
	Duck *md = new MallardDuck();
	md->performFly();
	md->performQuack();
	md->swim();
	md->display();
}

void testModelDuck(){
	ModelDuck md;
	md.performFly();
	md.performQuack();
	md.swim();
	md.display();
	md.setFlyBehavoir(new FlyRocketPowered());
	md.performFly();
}

int main(int argc, char** argv) {
	testModelDuck();
	return 0;
}