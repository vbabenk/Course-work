#include "Program.h"
#include "Array.h"

Program::Program()
{
}


Program::~Program()
{
}

void Program::Run()
{
	int i;
	char s[10];
	do
	{
		system("cls");
		cout << "-------------- MENU --------------" << endl;
		cout << "<1>.Create student's object" << endl;
		cout << "<2>.Create teacher's object" << endl;
		cout << "<3>.Show smth" << endl;
		cout << "<4>.Remove smth" << endl;
		cout << "<5>.Save to the file" << endl;
		cout << "<6>.Load from the file" << endl;
		cout << "<7>.Sort objects" << endl;
		cout << "<8>.Do request" << endl;
		cout << "<9>.Leave the program" << endl << endl;

		cin.getline(s, 10);
		i = atoi(s);
		switch (i)
		{
			case 1:
			{
				system("cls");
				create_student();
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				create_teacher();
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				show();
				system("pause");
				break;
			}
			case 4:
			{
				system("cls");
				remove();
				system("pause");
				break;
			}
			case 5:
			{
				system("cls");
				save_file();
				system("pause");
				break;
			}
			case 6:
			{
				system("cls");
				load_file();
				system("pause");
				break;
			}
			case 7:
			{
				system("cls");
				sort();
				system("pause");
				break;
			}
			case 8:
			{
				system("cls");
				do_request();
				system("pause");
				break;
			}
			default:
			{
				if (i > 9 || i < 0)
				{
					cout << "Your choice is not correct..." << endl;
					system("pause");
				}
				break;
			}
		}
	} 
	while (i != 9);
}
void Program::create_student()
{
}
void Program::create_teacher()
{
}
void Program::show()
{
}
void Program::remove()
{
}
void Program::save_file()
{
}
void Program::load_file()
{
}
void Program::sort()
{
}
void Program::do_request()
{
}