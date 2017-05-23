/*
* Бабенко Віталій БС-51
* Визначення класу Human
*/
#ifndef Human_h
#define Human_h
#include <string>																						//бібліотека для роботи з рядками
#include <fstream>																						//бібліотека для роботи з файловим потоком																				
#include <iostream>																						//бібліотека для роботи з екранним потоком
using namespace std;																					//простір імен std																		

//абстрактний клас Human
class Human
{
protected:
	string surname;																						//прізвище людини
	string name;																						//ім'я людини
	string sex;																							//стать людини
	int age;																							//вік людини
public:
	Human(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age);	//конструктор за параметрами
	Human();																							//конструктор за замовчуванням
	virtual ~Human();																					//віртуальний деструктор
	void set_surname(const string cur_surname);															//метод встановлення прізвища людини
	void set_name(const string cur_name);																//метод встановлення імені людини
	void set_sex(const string cur_sex);																	//метод встановлення статі людини
	void set_age(const int cur_age);																	//метод встановлення віку людини
	string get_surname() const;																			//метод отримання прізвища людини
	string get_name() const;																			//метод отримання імені людини
	string get_sex() const;																				//метод отримання статі людини
	int get_age() const;																				//метод отримання віку людини
	string validate_string();																			//метод валідації рядків
	string validate_sex();																				//метод валідації статі людини
	int validate_age();																					//метод валідації віку
	virtual void input();																			    //віртуальний метод зчитування даних з клавіатури
	virtual void show() const;																			//віртуальний метод виведення даних на екран
};
#endif