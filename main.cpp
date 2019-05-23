#include<iostream>
#include "alive.h"
#include "student.h"
#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include "fish.h"
#include "starosta.h"

#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	student stu;
	stu.StudentInfo();
	stu.StudentVivod();

	starosta gra;
	gra.starostaInfo();
	gra.starostaVivod();

	animal ani;
	ani.AllAnimal(1, 2);

	fish fi;
	fi.AllFish(3, 4);

	bird bi;
	bi.AllBird(5, 6);

	dog d;
	d.ChangeDog();

	cat c;
	c.ChangeCat();

	system("pause");
	return 0;
}