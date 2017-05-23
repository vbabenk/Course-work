/*
* ������� ³���� ��-51
* ���������� ����� Human
*/
#ifndef Human_h
#define Human_h
#include <string>																						//�������� ��� ������ � �������
#include <fstream>																						//�������� ��� ������ � �������� �������																				
#include <iostream>																						//�������� ��� ������ � �������� �������
using namespace std;																					//������ ���� std																		

//����������� ���� Human
class Human
{
protected:
	string surname;																						//������� ������
	string name;																						//��'� ������
	string sex;																							//����� ������
	int age;																							//�� ������
public:
	Human(const string cur_surname, const string cur_name, const string cur_sex, const int cur_age);	//����������� �� �����������
	Human();																							//����������� �� �������������
	virtual ~Human();																					//���������� ����������
	void set_surname(const string cur_surname);															//����� ������������ ������� ������
	void set_name(const string cur_name);																//����� ������������ ���� ������
	void set_sex(const string cur_sex);																	//����� ������������ ���� ������
	void set_age(const int cur_age);																	//����� ������������ ��� ������
	string get_surname() const;																			//����� ��������� ������� ������
	string get_name() const;																			//����� ��������� ���� ������
	string get_sex() const;																				//����� ��������� ���� ������
	int get_age() const;																				//����� ��������� ��� ������
	string validate_string();																			//����� �������� �����
	string validate_sex();																				//����� �������� ���� ������
	int validate_age();																					//����� �������� ���
	virtual void input();																			    //���������� ����� ���������� ����� � ���������
	virtual void show() const;																			//���������� ����� ��������� ����� �� �����
};
#endif