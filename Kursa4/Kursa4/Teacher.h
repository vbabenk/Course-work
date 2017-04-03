#ifndef Teacher_h
#define Teacher_h
#include "Human.h"
class Teacher:public Human
{
private:
	int experience;
public:
	Teacher(string, int,int);
	Teacher();
	~Teacher();
	void show();
};

#endif 