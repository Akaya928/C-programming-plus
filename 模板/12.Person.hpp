#pragma once
#include<iostream>

using namespace std;

template<class T1, class T2>
class Person
{
public:

	Person(T1 name, T2 age);

	void showIfo();

	T1 name;
	T2 age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showIfo()
{
	cout << "name: " << this->name<< endl
		<< "age: " << this->age << endl;
}