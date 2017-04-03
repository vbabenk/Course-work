#ifndef Program_h
#define Program_h
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Array.h"
class Program
{
public:
	Program();
	~Program();
	void Run();
	void create_student();
	void create_teacher();
	void show();
	void remove();
	void save_file();
	void load_file();
	void sort();
	void do_request();
};
#endif
