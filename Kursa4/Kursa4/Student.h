#ifndef Student_h
#define Student_h
#include "Human.h"
class Student: public Human
{
private:
	int avg_point;
public:
	Student(string,int,int);
	Student();
	~Student();
	void show();
};
#endif 

