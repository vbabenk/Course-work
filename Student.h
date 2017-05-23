/*
* Бабенко Віталій БС-51
* Визначення класу Student
*/
#ifndef Student_h
#define Student_h
#include "Human.h"										//абстрактний клас Human

//клас Student, що є нащадком Human
class Student : public Human
{
private:
	int course;											//курс, на якому навчається студент
	double avg_point;									//середній бал за останній семестр студента
public:
	Student(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_course, 
		const double cur_avgpoint);						//конструктор з параметрами
	Student();											//конструктор за замовчуванням
	~Student();											//деструктор
	void set_course(const int cur_course);				//метод встановлення курсу студента
	void set_avgpoint(const double cur_avgpoint);		//метод встановлення середнього балу студента
	int get_course() const;								//метод отримання курсу студента
	double get_avgpoint() const;						//метод отримання середнього бала студента
	friend ostream &operator<<(ostream&os, Student &s); //перевантаження виводу в потік
	friend istream &operator>>(istream&is, Student &s);	//перевантаження зчитування з потоку
	int validate_course();								//метод валідації курсу студента
	double validate_avgpoint();							//метод валідації середнього балу студента
	void input();										//метод зчитування даних з клавіатури
	void show() const;									//метод виведення даних на екран
};
#endif 