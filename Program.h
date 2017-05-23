/*
* ������� ³���� ��-51
* ���������� ����� Program
*/
#ifndef Program_h
#define Program_h
#include "Array.h"

//���� ��������
class Program
{
private:
	Array*ptr;					//��������� ���� ���������� ������
	unsigned int size;			//����� ����������
	void sizeofarray();			//����� ��������� ������ ��� ����������
	void create_student();		//����� ��������� ��'���� ����� Student
	void create_teacher();		//����� ��������� ��'���� ����� Teacher
	void remove();				//����� ��������� ��'���� 
	void showarray() const;		//����� ��������� ���������� �� �����
	void cleararray();			//����� �������� ����������
	void writetofile() const;	//����� ���������� ����������		
	void readfromfile();		//����� ������������ ����������
	void sort();				//����� ���������� ��'���� �� ��������  
	void do_request();			//����� ��������� ������ �� ���������� 
	int validate_size();		//����� �������� ������ ������ 
public:
	Program();					//����������� �� �������������
	~Program();					//����������
	void Run();					//����� ������� ��������
	void Menu();				//����� ������� ���� ��������
};
#endif