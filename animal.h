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
		cout << "Дайте имя своему животному: ";
		cin >> name;
		cout << "На что способно ваше животное: ";
		cin >> opp;
		cout << "Где будет жить твое животное: ";
		cin >> mesto;
		cout << "Чем вы будете кормить своего питомца: ";
		cin >> food;
		cout << "Ваше животное " << year << " лет и имеет длину хвоста=" << a << endl;
		cout << endl;
	}
};
#endif#pragma once
