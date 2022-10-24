#ifndef Display_GUARD
#define Display_GUARD

class DisplayElement{
	public:
		virtual void display() = 0;
		virtual ~DisplayElement() = 0;
};
DisplayElement::~DisplayElement() {}
#endif