//全局函数类内实现 — 直接在类内声明友元即可
//全局函数类外实现 — 需要提前让编译器知道全局函数的存在

//总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别  类外实现比较复杂

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//
////类外实现 方式一 让编译器提前知道  包括类模板和全局函数
//template<class T1, class T2>
//void showInfo3(Person<T1, T2> p3)
//{
//	cout << "类外实现-方式一-name: " << p3.name << endl
//		<< "类外实现-方式一-age: " << p3.age << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//1.全局函数 类内实现
//	friend void showInfo1(Person<T1, T2> p1)
//	{
//		cout << "类内实现-name: " << p1.name << endl
//			<< "类内实现-age: " << p1.age << endl;
//	}
//
//	//2.全局函数 类外实现
//	//2.1如果全局函数 是类外实现，方式一 提前让编译器知道全局函数的存在 并加上空模板参数列表
//	friend void showInfo3<>(Person<T1, T2> p3);
//	
//
//	//2.2如果全局函数 是类外实现，方式二 在类内声明时，告诉编译器这是模板
//	template<class T1, class T2>
//	friend void showInfo2(Person<T1, T2> p2);
//
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//private:
//
//	T1 name;
//
//	T2  age;
//};
//
////类外实现 方式二
//template<class T1, class T2>
//void showInfo2(Person<T1, T2> p2)
//{
//	cout << "类外实现-方式二-name: " << p2.name << endl
//		<< "类外实现-方式二-age: " << p2.age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//
//	showInfo1(p1);
//}
//
//void test02()
//{
//	Person<string, int> p2("Dave", 20);
//
//	showInfo2(p2);
//}
//
//void test03()
//{
//	Person<string, int> p3("Jose", 21);
//
//	showInfo3(p3);
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	test03();
//
//	return 0;
//}