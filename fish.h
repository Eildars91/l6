#pragma once
#include <iostream>
#include <string>
#ifndef FISH_H
#define FISH_H
using namespace std;
class fish : public alive
{
public:
	int year, a;

	void AllFish(int year, int a)
	{
		cout << "��� ��� ����� �����: ";
		cin >> name;
		cout << "�� ��� �������� ���� �����: ";
		cin >> opp;
		cout << "��� ����� ���� ���� ��������: ";
		cin >> mesto;
		cout << "��� �� ������ ������� ������ �������: ";
		cin >> food;
		cout << "���� ����� " << year << " ��� � ����� ����� ��������=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
