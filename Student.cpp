/*
* Бабенко Віталій БС-51
* Визначення методів класу Student
*/
#include "Student.h"
// ---------------------------------------------------------------------------------------------------------
// конструктор з параметрами
Student::Student(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_course,
	const double cur_avgpoint) : Human(cur_surname, cur_name, cur_sex, cur_age), course(cur_course), avg_point(cur_avgpoint)
{
}
// ---------------------------------------------------------------------------------------------------------
// конструктор за замовчуванням
Student::Student()
{
}
// ---------------------------------------------------------------------------------------------------------
// деструктор
Student::~Student()
{
}
// ---------------------------------------------------------------------------------------------------------
// метод встановлення курсу студента
void Student::set_course(const int cur_course)
{
	course = cur_course;
}
// ---------------------------------------------------------------------------------------------------------
// метод отримання середнього балу студента
void Student::set_avgpoint(const double cur_avgpoint)
{
	avg_point = cur_avgpoint;
}
// ---------------------------------------------------------------------------------------------------------
// метод отримання курсу студента
int Student::get_course() const
{
	return course;
}
// ---------------------------------------------------------------------------------------------------------
// метод отримання середнього балу студента
double Student::get_avgpoint() const
{
	return avg_point;
}
// ---------------------------------------------------------------------------------------------------------
// перевантаження виводу в потік
istream& operator>>(istream&is, Student &s)
{
	is >> s.surname >> s.name >> s.sex >> s.age >> s.course >> s.avg_point;
	return is;
}
// ---------------------------------------------------------------------------------------------------------
// перевантаження зчитування з потоку
ostream& operator<<(ostream&os, Student &s)
{
	os << s.surname << endl << s.name << endl << s.sex << endl << s.age << endl << s.course << endl << s.avg_point << endl;
	return os;
}
// ---------------------------------------------------------------------------------------------------------
// метод валідації середнього балу студента
int Student::validate_course()
{
	int cur_course;
	while (!(cin >> cur_course) || cin.peek() != '\n' || cur_course < 1 || cur_course > 6)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! Try again: ";
	}
	return cur_course;
}
// ---------------------------------------------------------------------------------------------------------
// метод валідації середнього балу студента
double Student::validate_avgpoint()
{
	double cur_avgpoint;
	while (!(cin >> cur_avgpoint) || cin.peek() != '\n' || cur_avgpoint < 3 || cur_avgpoint > 5)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! Try again: ";
	}
	return cur_avgpoint;
}
// ---------------------------------------------------------------------------------------------------------
// метод зчитування даних з клавіатури
void Student::input()
{
	Human::input();
	cout << "Enter course (from 1 to 6): ";
	course = validate_course();
	cout << "Enter average point (from 3 to 5): ";
	avg_point = validate_avgpoint();
}
// ---------------------------------------------------------------------------------------------------------
// метод виводу даних на екран
void Student::show() const
{
	Human::show();
	cout << "Course: " << course << endl
		<< "Average point: " << avg_point << endl;
}