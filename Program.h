/*
* Бабенко Віталій БС-51
* Визначення класу Program
*/
#ifndef Program_h
#define Program_h
#include "Array.h"

//клас програми
class Program
{
private:
	Array*ptr;					//контейнер типу динамічного масива
	unsigned int size;			//розмір контейнера
	void sizeofarray();			//метод задавання розміру для контейнера
	void create_student();		//метод створення об'єкта класу Student
	void create_teacher();		//метод створення об'єкта класу Teacher
	void remove();				//метод видалення об'єкта 
	void showarray() const;		//метод виведення контейнера на екран
	void cleararray();			//метод очищення контейнера
	void writetofile() const;	//метод серіалізації контейнера		
	void readfromfile();		//метод десеріалізації контейнера
	void sort();				//метод сортування об'єктів за прізвищем  
	void do_request();			//метод виконання запиту до контейнера 
	int validate_size();		//метод валідації розміру масива 
public:
	Program();					//конструктор за замовчуванням
	~Program();					//деструктор
	void Run();					//метод запуску програми
	void Menu();				//метод запуску меню програми
};
#endif