#ifndef Human_h
#define Human_h
#include <string>
#include <iostream>
using namespace std;
class Human
{
protected:
	string name;
	int age;
public:
	Human(string, int);
	Human();
	~Human();
	virtual void show();
};
#endif
