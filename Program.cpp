/*
* ������� ³���� ��-51
* ���������� ������ ����� Program
*/
#include "Program.h"
// ---------------------------------------------------------------------------------------------------------
// ����������� �� �������������
Program::Program()
{
	ptr = new Array();
}
// ---------------------------------------------------------------------------------------------------------
// ����������
Program::~Program()
{
	delete ptr;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������� ��������
void Program::Run()
{
	int i;
	string s;
	do
	{
		system("cls");
		cout << "Welcome user!" << endl;
		cout << "To start work with program in menu input 1." << endl << "To leave the program input 2." << endl << endl;
		cin >> s;
		i = atoi(s.c_str());
		if (i == 1)
		{
			system("cls");
			sizeofarray();
			Menu();
		}
		else
			if (i > 2 || i < 0)
			{
				cout << "Error! Try again" << endl;
				system("pause");
			}
	} while (i != 2);
	system("cls");
	cout << "Goodbye. Good luck, have fun!" << endl;
	system("pause");
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������� ����
void Program::Menu()
{
	int i;
	string s;
	do
	{
		system("cls");
		cout << "-------------- MENU --------------" << endl;
		cout << "<1> Create student's object." << endl;
		cout << "<2> Create teacher's object." << endl;
		cout << "<3> Remove object." << endl;
		cout << "<4> Show array." << endl;
		cout << "<5> Clean array." << endl;
		cout << "<6> Save objects to the file." << endl;
		cout << "<7> Load objects from the file." << endl;
		cout << "<8> Sort objects by surname." << endl;
		cout << "<9> Ouput unsuccesful students." << endl;
		cout << "<10> Leave menu." << endl << endl;
		cin >> s;
		i = atoi(s.c_str());
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
			remove();
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			showarray();
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			cleararray();
			system("pause");
			break;
		}
		case 6:
		{
			system("cls");
			writetofile();
			system("pause");
			break;
		}
		case 7:
		{
			system("cls");
			readfromfile();
			system("pause");
			break;
		}
		case 8:
		{
			system("cls");
			sort();
			system("pause");
			break;
		}
		case 9:
		{
			system("cls");
			do_request();
			system("pause");
			break;
		}
		default:
		{
			if (i > 10 || i < 0)
			{
				cout << "Your choice is not correct..." << endl;
				system("pause");
			}
			break;
		}
		}
	} while (i != 10);
	ptr->~Array();
}
// ---------------------------------------------------------------------------------------------------------
// ����� �������� ������ ������
int Program::validate_size()
{
	int cur_size;
	while (!(cin >> cur_size) || (cin.peek() != '\n') || (cur_size < 1))
	{
		system("cls");
		cin.clear();
		while (cin.get() != '\n');
		cout << "Input the size of array with which you will work: ";
	}
	return cur_size;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ������ ��� ����������
void Program::sizeofarray()
{
	cout << "Input the size of array with which you will work: ";
	size = validate_size();
	ptr = new Array(size);
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ��'���� ����� Student
void Program::create_student()
{
	Human *h;
	h = new Student();
	h->input();
	ptr->add(h);
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ��'���� ����� Teacher
void Program::create_teacher()
{
	Human *h;
	h = new Teacher();
	h->input();
	ptr->add(h);
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ��'���� 
void Program::remove()
{
	ptr->remove();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ���������� �� ����� 
void Program::showarray() const
{
	ptr->show();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ����������
void Program::cleararray()
{
	ptr->clean();
	cout << "Objects of array were removed" << endl;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ���������� ���������� 
void Program::writetofile() const
{
	ptr->writetofile();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������������ ����������
void Program::readfromfile()
{
	ptr->readfromfile(ptr);
}
// ---------------------------------------------------------------------------------------------------------
// ����� ���������� ��'���� �� ��������
void Program::sort()
{
	ptr->sort();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ������ �� ����������
void Program::do_request()
{
	ptr->search();
}