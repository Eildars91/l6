#pragma once
#include <iostream>
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
class animal : public alive
{
public:
	int year, a;

	void AllAnimal(int year, int a)
	{
		cout << "����� ��� ������ ���������: ";
		cin >> name;
		cout << "�� ��� �������� ���� ��������: ";
		cin >> opp;
		cout << "��� ����� ���� ���� ��������: ";
		cin >> mesto;
		cout << "��� �� ������ ������� ������ �������: ";
		cin >> food;
		cout << "���� �������� " << year << " ��� � ����� ����� ������=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
