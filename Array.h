/*
* ������� ³���� ��-51
* ���������� ����� Array
*/
#ifndef Array_h
#define Array_h
#include "Student.h"
#include "Teacher.h"

//���� ������
class Array
{
private:
	Human**arr;								//��������� �����
	unsigned int capacity;					//����� ������
	unsigned int size;						//������� �������� � �����
public:
	Array();								//����������� �� �������������
	Array(int cur_capacity);				//����������� � ����������
	~Array();								//����������
	bool empty() const;						//����� �������� ������ �� ���������
	void add(Human *cur_human);				//����� ��������� ��'���� � �����
	int validate_index();					//����� �������� �������
	void remove();							//����� ��������� ��'���� � ������
	void clean();							//����� �������� ������
	void writetofile();						//����� ���������� ������
	void readfromfile(Array *ptr);			//����� ������������ ������
	void sort() const;						//����� ����������� ���������� ��'���� �� ��������
	void search() const;					//����� ������ ��������� ��������
	void show() const;						//����� ������ ������ �� �����
};

#endif