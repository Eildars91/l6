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
		cout << "Имя студента:";
		cin >> name;
		cout << "На каком факультете учится студент : ";
		cin >> f;
		cout << "Какую специализацию изучает студент : ";
		cin >> special;
	}
	void StudentVivod()
	{
		cout << "Имя студента " << name<< " и специальность " << special << " в " << f << " факультете " << endl;
		cout << endl;
	}

	~student()
	{}
};
#endif#pragma once
