#pragma once
#include <iostream>
#ifndef CAT_H
#define CAT_H
using namespace std;
class cat : public animal
{
public:
	string voz;
	void ChangeCat()
	{
		cout << "Что бы ваша кошка умела делать: ";
		cin >> voz;
		cout << "Теперь ваша кошка " << voz << endl;
		cout << endl;
	}
};
#endif#pragma once
