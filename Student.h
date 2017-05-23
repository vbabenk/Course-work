/*
* ������� ³���� ��-51
* ���������� ����� Student
*/
#ifndef Student_h
#define Student_h
#include "Human.h"										//����������� ���� Human

//���� Student, �� � �������� Human
class Student : public Human
{
private:
	int course;											//����, �� ����� ��������� �������
	double avg_point;									//������� ��� �� ������� ������� ��������
public:
	Student(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_course, 
		const double cur_avgpoint);						//����������� � �����������
	Student();											//����������� �� �������������
	~Student();											//����������
	void set_course(const int cur_course);				//����� ������������ ����� ��������
	void set_avgpoint(const double cur_avgpoint);		//����� ������������ ���������� ���� ��������
	int get_course() const;								//����� ��������� ����� ��������
	double get_avgpoint() const;						//����� ��������� ���������� ���� ��������
	friend ostream &operator<<(ostream&os, Student &s); //�������������� ������ � ����
	friend istream &operator>>(istream&is, Student &s);	//�������������� ���������� � ������
	int validate_course();								//����� �������� ����� ��������
	double validate_avgpoint();							//����� �������� ���������� ���� ��������
	void input();										//����� ���������� ����� � ���������
	void show() const;									//����� ��������� ����� �� �����
};
#endif 