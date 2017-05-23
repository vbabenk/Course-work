/*
* ������� ³���� ��-51
* ���������� ����� Teacher
*/
#ifndef Teacher_h
#define Teacher_h
#include "Human.h"										//����������� ���� Human

//���� Teacher, �� � �������� Human
class Teacher :public Human
{
private:
	int experience;										//���� ���������		
	double work_time;									//������� ������� ����� ��������� �� �������																											 
public:
	Teacher(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age, const int cur_exp, 
		const double cur_worktime);					    //����������� � �����������
	Teacher();											//����������� �� �������������
	~Teacher();											//����������
	void set_experience(const int cur_exp);				//����� ������������ ����� ���������
	void set_worktime(const double cur_worktime);		//����� ������������ ������� ����� ���������
	int get_experience() const;							//����� ��������� ����� ���������
	double get_worktime() const;						//����� ��������� ������� ����� ���������
	friend ostream &operator<<(ostream&os, Teacher &t);	//�������������� ������ � ����
	friend istream &operator>>(istream&is, Teacher &t);	//�������������� ���������� � ������
	int validate_exp();									//����� �������� ����� ���������
	double validate_worktime();							//����� �������� ������� ����� ��������� 
	void input();										//����� ���������� ����� � ���������
	void show() const;									//����� ������ ����� �� �����
};
#endif 