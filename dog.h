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
		cout << "Что бы ваша собака умела делать: ";
		cin >> voz;
		cout << "Теперь ваша собака " << voz << endl;
		cout << endl;
	}
};
#endif#pragma once
