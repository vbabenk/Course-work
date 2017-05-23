/*
* ������� ³���� ��-51
* ���������� ������ ����� Human
*/
#include "Human.h"
// ---------------------------------------------------------------------------------------------------------
// ����������� � �����������
Human::Human(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age) : surname(cur_surname), name(cur_name), sex(cur_sex), age(cur_age)
{
}
// ---------------------------------------------------------------------------------------------------------
// ����������� �� �������������
Human::Human()
{
}
// ---------------------------------------------------------------------------------------------------------
// ����������
Human::~Human()
{
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������������ ������� ������
void Human::set_surname(const string cur_surname)
{
	surname = cur_surname;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������������ ���� ������
void Human::set_name(const string cur_name)
{
	name = cur_name;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������������ ���� ������
void Human::set_sex(const string cur_sex)
{
	sex = cur_sex;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ������������ ��� ������
void Human::set_age(const int cur_age)
{
	age = cur_age;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ������� ������
string Human::get_surname() const
{
	return surname;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ���� ������
string Human::get_name() const
{
	return name;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ���� ������
string Human::get_sex() const
{
	return sex;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ��� ������
int Human::get_age() const
{
	return age;
}
// ---------------------------------------------------------------------------------------------------------
// ����� �������� �����
string Human::validate_string()
{
	string str;
	bool flag = true;
	while (true)
	{
		flag = true;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
			if (str[i] >= '0' && str[i] <= '9')
				flag = false;
		if (!flag)
		{
			while (cin.get() != '\n');
			cout << "Error! Try again: ";
			continue;
		}
		else
			break;
	}
	return str;
}
// ---------------------------------------------------------------------------------------------------------
// ����� �������� ���� ������
string Human::validate_sex()
{
	string cur_sex;
	while (true)
	{
		cin >> cur_sex;
		if (cur_sex == "Male" || cur_sex == "male" || cur_sex == "Female" || cur_sex == "female")
			return cur_sex;
		else
		{
			while (cin.get() != '\n');
			cout << "Error! Try again: ";
			continue;
		}
	}
}
// ---------------------------------------------------------------------------------------------------------
// ����� ���������� ����� � ���������
int Human::validate_age()
{
	int cur_age;
	while (!(cin >> cur_age) || (cin.peek() != '\n') || (cur_age < 14) || (cur_age > 100))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! Try again: ";
	}
	return cur_age;
}
// ---------------------------------------------------------------------------------------------------------
// ����� ���������� ����� � ���������
void Human::input()
{
	cout << "Enter surname: ";
	surname = validate_string();
	cout << "Enter name: ";
	name = validate_string();
	cout << "Enter gender (male or female): ";
	sex = validate_sex();
	cout << "Enter age (at least 14): ";
	age = validate_age();
}
// ---------------------------------------------------------------------------------------------------------
// ����� ��������� ����� �� �����
void Human::show() const
{
	cout << "Surname: " << surname << endl
		<< "Name: " << name << endl
		<< "Sex: " << sex << endl
		<< "Age: " << age << endl;
}