//类模板实例化出的对象，向函数传参的方式
//一共有三种传入方式：
//1.指定传入的类型 --- 直接显示对象的数据类型（实际开发中常用）
//2.参数模板化     --- 将对象中的参数变为模板进行传递
//3.整个类模板化   --- 将这个对象类型模板化进行传递

//总结：
//1.通过类模板创建的对象，可以有三种方式向函数中进行传参
//2.使用比较广泛的是第一种：指定传入的类型

//#include<iostream>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	void showInfo()
//	{
//		cout << "姓名：" << this->name << endl
//			<< "年龄：" << this->age << endl;
//	}
//
//	T1 name;
//
//	T2 age;
//};
//
////1.指定传入的类型（实际开发中常用）
//void printPerson1(Person<string, int>&p1)
//{
//	p1.showInfo();
//}
//
//void test01()
//{
//	Person<string, int>p1("Sara", 19);
//	printPerson1(p1);
//}
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p2)
//{
//	p2.showInfo();
//
//	cout << "type of T1: " << typeid(T1).name() << endl
//		<< "type of T2: " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p2("Dave", 19);
//	printPerson2(p2);
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p2)
//{
//	p2.showInfo();
//
//	cout << "type of T: " << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p3("Joes", 20);
//	printPerson3(p3);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	return 0;
//}