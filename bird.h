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
		cout << "Дай имя своей птице: ";
		cin >> name;
		cout << "На что способна ваша птица: ";
		cin >> opp;
		cout << "Где будет жить твое животное: ";
		cin >> mesto;
		cout << "Чем вы будете кормить своего питомца: ";
		cin >> food;
		cout << "Ваша птица " << year << " лет и имеет длину крыльев=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
