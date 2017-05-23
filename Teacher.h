/*
* Бабенко Віталій БС-51
* Визначення класу Teacher
*/
#ifndef Teacher_h
#define Teacher_h
#include "Human.h"										//абстрактний клас Human

//клас Teacher, що є нащадком Human
class Teacher :public Human
{
private:
	int experience;										//стаж викладача		
	double work_time;									//кількість робочих годин викладача за семестр																											 
public:
	Teacher(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_exp, 
		const double cur_worktime);					    //конструктор з параметрами
	Teacher();											//конструктор за замовчуванням
	~Teacher();											//деструктор
	void set_experience(const int cur_exp);				//метод встановлення стажу викладача
	void set_worktime(const double cur_worktime);		//метод встановлення робочих годин викладача
	int get_experience() const;							//метод отримання стажу викладача
	double get_worktime() const;						//метод отримання робочих годин викладача
	friend ostream &operator<<(ostream&os, Teacher &t);	//перевантаження виводу у потік
	friend istream &operator>>(istream&is, Teacher &t);	//перевантаження зчитування з потоку
	int validate_exp();									//метод валідації стажу викладача
	double validate_worktime();							//метод валідації робочих годин викладача 
	void input();										//метод зчитування даних з клавіатури
	void show() const;									//метод виводу даних на екран
};
#endif 