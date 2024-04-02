//总结：类模板中成员函数类外实现时，需要加上模板参数列表

//#include<iostream>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//
//	void showIfo();
//
//	T1 name;
//	T2 age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showIfo()
//{
//	cout << "name: " << this->name << endl
//		<< "age: " << this->age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//	p1.showIfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}