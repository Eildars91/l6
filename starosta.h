#pragma once
#include <iostream>
#include <string>
#ifndef STAROSTA_H
#define STAROSTA_H
using namespace std;

class starosta : public student {
public:
	string work;
	int cash;
	void starostaInfo()
	{
		cout << "��� ������ ������ ��������: ";
		cin >> work;
		cout << "������� ����� ������������ ��������: ";
		cin >> cash;
	}
	void starostaVivod()
	{
		cout << "��� ��������� ������ ������� " << work << " � �������� " << cash << " �� ���� ������" << endl;
		cout << endl;
	}
};
#endif#pragma once
