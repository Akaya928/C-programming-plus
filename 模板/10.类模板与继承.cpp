//当类模板碰到继承时，需要注意以下几点：
//1.当子类继承的父类是一个类模板时，子类在声明时，要指定出父类中的通用数据类型（T）的类型
//2.如果不指定，编译器无法给子类分配内存
//3.如果想灵活指定出父类中通用数据类型（T）的类型，子类也需要变为类模板

//总结：
//如果父类是类模板，子类需要指定出父类中通用数据类型（T）的数据类型

//#include<iostream>
//
//using namespace std;
//
//template<class T>
//class Base
//{
//public:
//
//	T m;
//
//};
//
////1.当子类继承的父类是一个类模板时，子类在声明时，要指定出父类中的通用数据类型（T）的类型
//class Son1 : public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son1 s1;
//}
//
////2.如果想灵活指定出父类中通用数据类型（T）的类型，子类也需要变为类模板
//template<class T1, class T2>
//class Son2 : public Base<T1>
//{
//public:
//
//	Son2()
//	{
//		cout << "type of T1: " << typeid(T1).name() << endl
//			<< "type of T2: " << typeid(T2).name() << endl;
//	}
//
//	T2 obj;
//};
//
//void test02()
//{
//	Son2<string, char> s2;
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}