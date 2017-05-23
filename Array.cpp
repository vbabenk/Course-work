/*
* Бабенко Віталій БС-51
* Визначення методів класу Array
*/
#include "Array.h"
// ---------------------------------------------------------------------------------------------------------
// конструктор за замовчуванням
Array::Array(): capacity(0), size(0)
{
}
// ---------------------------------------------------------------------------------------------------------
// конструктор з параметром
Array::Array(int cur_capacity) :capacity(cur_capacity), size(0)
{
	arr = new Human *[cur_capacity];
	for (int i = 0; i < cur_capacity; i++)
		arr[i] = NULL;
}
// ---------------------------------------------------------------------------------------------------------
// деструктор
Array::~Array()
{
	for (int i = 0; i < capacity; i++)
		delete arr[i];
	delete[]arr;
	capacity = 0;
}
// ---------------------------------------------------------------------------------------------------------
// метод перевірки масиву на порожність
bool Array::empty() const
{
	return size == 0;
}
// ---------------------------------------------------------------------------------------------------------
// метод додавання об'єкта в масив
void Array::add(Human *cur_human)
{
	if (size < capacity)
	{
		arr[size] = cur_human;
		size++;
	}
	else
	{
		unsigned int new_capacity = (capacity * 3) / 2 + 1;
		Human**newarr = new Human*[new_capacity];
		for (int i = 0; i < new_capacity; i++)
			if (i < capacity)
				newarr[i] = arr[i];
			else
				newarr[i] = NULL;
		delete[]arr;
		arr = new Human*[new_capacity];
		arr = newarr;
		capacity = new_capacity;
		arr[size] = cur_human;
		size++;
	}
}
// ---------------------------------------------------------------------------------------------------------
// метод валідації індекса
int Array::validate_index()
{
	int i;
	while (!(cin >> i) || (cin.peek() != '\n') || (i < 0))
	{
		system("cls");
		cin.clear();
		while (cin.get() != '\n');
		cout << "Enter index of object, which you wanna remove (begins with 0): ";
	}
	return i;
}
// ---------------------------------------------------------------------------------------------------------
// метод видалення об'єкта з масиву
void Array::remove()
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	int index;
	cout << "Enter index of object, which you wanna remove (begins with 0): ";
	index = validate_index();
	if (arr[index] != NULL)
	{
		arr[index] = NULL;
		size--;
	}
	else
		cout << "Object with this index is not exist" << endl;

}
// ---------------------------------------------------------------------------------------------------------
// метод очищення масиву
void Array::clean()
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	for (int i = 0; i < capacity; i++)
		if (arr[i] != NULL)
		{
			arr[i] = NULL;
			size--;
		}
}
// ---------------------------------------------------------------------------------------------------------
// метод серіалізації масиву
void Array::writetofile()
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	string file_name;
	cout << "Please, input name of file to which you wanna write: ";
	cin >> file_name;
	ofstream out(file_name);
	if (out.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			if (typeid(*(arr[i])) == typeid(Student))
			{
				out << 1 << "\n";
				out << *((Student*)(arr[i]));
			}
			else
			{
				out << 2 << "\n";
				out << *((Teacher*)(arr[i]));
			}
		}
		out.close();
		cout << "Writing to file is completed" << endl;
	}
	else
		cout << "File could not open" << endl;
}
// ---------------------------------------------------------------------------------------------------------
// метод десеріалізації масиву
void Array::readfromfile(Array *ptr)
{
	string file_name;
	cout << "Please, input name of file you wanna read: ";
	cin >> file_name;
	ifstream in(file_name);
	if (in.is_open())
	{
		Student *s;
		Teacher *t;
		int k;
		in >> k;
		while (!in.eof())
		{
			if (k == 1)
			{
				s = new Student();
				in >> (*s);
				ptr->add(s);
			}
			if (k == 2)
			{
				t = new Teacher();
				in >> (*t);
				ptr->add(t);
			}
			in >> k;
		}
		in.close();
		cout << "Reading from file is over" << endl;
	}
	else
		cout << "File could not open" << endl;
}
// ---------------------------------------------------------------------------------------------------------
// метод бульбашкого сортування об'єктів за прізвищем
void Array::sort() const
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	for(int i = 0; i < size; i++)
		for(int j = size - 1; j > i; j--)
			if (arr[j - 1]->get_surname() > arr[j]->get_surname())
			{
				Human * temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;	
			}
	cout << "Array was sorted" << endl;
}
// ---------------------------------------------------------------------------------------------------------
// метод пошуку неуспішних студентів
void Array::search() const
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	cout << "List of unsuccesful students: " << endl << endl;
	for (int i = 0; i < size; i++)
	{
		Human *temp = arr[i];
		Student* s = dynamic_cast<Student*>(arr[i]);
		if (s != NULL && s->get_avgpoint() < 4)
		{
			s->show();
			cout << endl;
		}
	}
}
// ---------------------------------------------------------------------------------------------------------
// метод виводу масиву на екран
void Array::show() const
{
	if (empty())
	{
		cout << "Array is empty" << endl;
		return;
	}
	int a = 1;
	int b = 1;
	cout << "Array of objects: " << endl << endl;
	for (int i = 0; i < size; i++)
	{
		if (typeid(*(arr[i])) == typeid(Student))
		{
			cout << "Student #" << a << endl;
			a++;
		}
		else
		{
			cout << "Teacher #" << b << endl;
			b++;
		}
		arr[i]->show();
		cout << endl;
	}
}