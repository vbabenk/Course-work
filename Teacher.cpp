/*
* ������� ³���� ��-51
* ���������� ������ ����� Teacher
*/
#include "Teacher.h"
// ---------------------------------------------------------------------------------------------------------
// ����������� � �����������
Teacher::Teacher(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_exp,const double cur_worktime) : 
	Human(cur_surname, cur_name, cur_sex, cur_age), experience(cur_exp), work_time(cur_worktime)
{
}
// ---------------------------------------------------------------------------------------------------------
// ����������� �� �������������
Teacher::Teacher()
{
}
//---------------------------------------------------------------------------------------------------------
//����������
Teacher::~Teacher()
{
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ����� ���������
void Teacher::set_experience(const int cur_exp)
{
	experience = cur_exp;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ����� ���������
void Teacher::set_worktime(const double cur_worktime)
{
	work_time = cur_worktime;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ����� ���������
int Teacher::get_experience() const
{
	return experience;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ������� ����� ���������
double Teacher::get_worktime() const
{
	return work_time;
}
// ---------------------------------------------------------------------------------------------------------
// �������������� ������ � ����
istream& operator>>(istream&is, Teacher &t)
{
	is >> t.surname >> t.name >> t.sex >> t.age >> t.experience >> t.work_time;
	return is;
}
// ---------------------------------------------------------------------------------------------------------
// �������������� ���������� � ������
ostream& operator<<(ostream&os, Teacher &t)
{
	os << t.surname << endl << t.name << endl << t.sex << endl << t.age << endl << t.experience << endl << t.work_time << endl;
	return os;
}
// ---------------------------------------------------------------------------------------------------------
// ����� �������� ����� ���������
int Teacher::validate_exp()
{
	int cur_exp;
	while (!(cin >> cur_exp) || (cin.peek() != '\n') || (cur_exp < 0))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! Try again: ";
	}
	return cur_exp;
}
// ---------------------------------------------------------------------------------------------------------
// ����� �������� ������� ����� ���������
double Teacher::validate_worktime()
{
	double cur_worktime;
	while (!(cin >> cur_worktime) || (cin.peek() != '\n') || (cur_worktime < 0))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! Try again: ";
	}
	return cur_worktime;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ���������� ����� � ���������
void Teacher::input()
{
	Human::input();
	cout << "Enter experience (in years): ";
	experience = validate_exp();
	cout << "Enter work time (in hours): ";
	work_time = validate_worktime();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������ ����� �� �����
void Teacher::show() const
{
	Human::show();
	cout << "Experience (in years): " << experience << endl
		<< "Work time (in hours): " << work_time << endl;
}