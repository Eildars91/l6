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
		cout << "Дай имя своей рыбке: ";
		cin >> name;
		cout << "На что способна ваша рыбка: ";
		cin >> opp;
		cout << "Где будет жить твое животное: ";
		cin >> mesto;
		cout << "Чем вы будете кормить своего питомца: ";
		cin >> food;
		cout << "Ваша птица " << year << " лет и имеет длину плавника=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
