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
		cout << "„то должен делать староста: ";
		cin >> work;
		cout << "—колько денег зарабатывает староста: ";
		cin >> cash;
	}
	void starostaVivod()
	{
		cout << "¬аш слушатель должен сделать " << work << " и получает " << cash << " за свою работу" << endl;
		cout << endl;
	}
};
#endif#pragma once
