//类模板中成员函数和普通类中的成员函数创建时机是有区别的
//1.普通类中的成员函数一开始就可以创建
//2.类模板中的成员函数在调用时才创建（因为不完整，只有调用的时候指定了参数类型才完整）

//总结：
//类模板中的成员函数并不是一开始就创建的，只有在调用时才去创建
//（在调用阶段才创建是为了保证模板的通用性）

//#include<iostream>
//
//using namespace std;
//
//class Person1
//{
//public:
//
//	void showPerson1()
//	{
//		cout << "show Person1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//
//	void showPerson2()
//	{
//		cout << "show Person2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person2>m1;
//
//	//m1.obj.showPerson1();
//	//m1.func1();
//	m1.func2();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}