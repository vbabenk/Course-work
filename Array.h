/*
* Бабенко Віталій БС-51
* Визначення класу Array
*/
#ifndef Array_h
#define Array_h
#include "Student.h"
#include "Teacher.h"

//клас масиву
class Array
{
private:
	Human**arr;								//динамічний масив
	unsigned int capacity;					//розмір масиву
	unsigned int size;						//кількість елементів в масиві
public:
	Array();								//конструктор за замовчуванням
	Array(int cur_capacity);				//конструктор з параметром
	~Array();								//деструктор
	bool empty() const;						//метод перевірки масиву на порожність
	void add(Human *cur_human);				//метод додавання об'єкта в масив
	int validate_index();					//метод валідації індекса
	void remove();							//метод видалення об'єкта з масиву
	void clean();							//метод очищення масиву
	void writetofile();						//метод серіалізації масиву
	void readfromfile(Array *ptr);			//метод десеріалізації масиву
	void sort() const;						//метод бульбашкого сортування об'єктів за прізвищем
	void search() const;					//метод пошуку неуспішних студентів
	void show() const;						//метод виводу масиву на екран
};

#endif