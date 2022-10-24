#ifndef Observer_GUARD
#define Observer_GUARD

class Observer{
	public:
		virtual void update() = 0;
		virtual ~Observer() = 0;
};
Observer::~Observer() {}
#endif