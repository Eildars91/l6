#pragma once
#include <iostream>
#ifndef DOG_H
#define DOG_H
using namespace std;
class dog : public animal
{
public:
	string voz;
	void ChangeDog()
	{
		cout << "��� �� ���� ������ ����� ������: ";
		cin >> voz;
		cout << "������ ���� ������ " << voz << endl;
		cout << endl;
	}
};
#endif#pragma once
