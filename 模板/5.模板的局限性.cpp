//模板的通用性并不是万能的
/* template<typrname T>
 void func(T a, T b)
 {
	if(a > b) { ... }
 }*/
//在上述代码中，如果T的数据类型传入的是像Person这样的自定义数据类型，无法正常运行
//因此C++为了解决这种问题，提供模板的重载，可以为这些特定的类型具体化模板


//总结：
//1.利用具体化的模板，可以解决自定义数据类型的通用化（大众类型用模板，特定类型再写特定函数）
//2.学习模板并不是为了写模板，而是在STL中能够运用系统提供的模板

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age) : m_Name(name), m_Age(age)
//	{
//
//	}
//
//	string m_Name;
//
//	int m_Age;
//};
//
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	if (myCompare(a, b))
//	{
//		cout << "a = b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
////利用具体化Person的版本实现代码，具体化优先调用
//template<> bool myCompare(Person &p1, Person &p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test02()
//{
//	Person p1("Sara", 19), p2("Sara", 19);
//
//	if (myCompare(p1, p2))
//	{
//		cout << "p1 = p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}