#ifndef Subject_GUARD
#define Subject_GUARD
#include "Observer.h"

class Subject{
	public:
		virtual void registerObserver(Observer* ob) = 0;
		virtual void removeObserver(Observer* ob) = 0;
		virtual void notifyObserver() = 0;
		virtual ~Subject() = 0;
};
Subject::~Subject() {}

#endif