#pragma once
#include <iostream>
#include <string>
#ifndef BIRD_H
#define BIRD_H
using namespace std;
class bird : public alive
{
public:
	int year,a;

	void AllBird(int year, int a)
	{
		cout << "��� ��� ����� �����: ";
		cin >> name;
		cout << "�� ��� �������� ���� �����: ";
		cin >> opp;
		cout << "��� ����� ���� ���� ��������: ";
		cin >> mesto;
		cout << "��� �� ������ ������� ������ �������: ";
		cin >> food;
		cout << "���� ����� " << year << " ��� � ����� ����� �������=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
