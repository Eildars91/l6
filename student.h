#pragma once
#include <iostream>
#include <string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class student
{
public:
	string f,special,name;

	void StudentInfo()
	{
		cout << "��� ��������:";
		cin >> name;
		cout << "�� ����� ���������� ������ ������� : ";
		cin >> f;
		cout << "����� ������������� ������� ������� : ";
		cin >> special;
	}
	void StudentVivod()
	{
		cout << "��� �������� " << name<< " � ������������� " << special << " � " << f << " ���������� " << endl;
		cout << endl;
	}

	~student()
	{}
};
#endif#pragma once
