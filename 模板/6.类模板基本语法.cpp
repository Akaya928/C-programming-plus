//1.类模板的作用：
//建立一个通用类，类中的成员数据类型可以不具体制定，用一个虚拟的类型来代表

//2.语法：
//template<class T>
//类

//3.解释：
//      template --- 声明创建模板
//      class --- 表明其后面的符号是一种数据类型，可以用typename代替
//      T        --- 通用的数据类型，名称可以替换，通常为大写字母

//4.总结：
//类模板和函数模板语法相似，在声明模板template后面加类，此类称为类模板

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class TypeName, class TypeAge>
//class Person
//{
//public:
//
//	Person(TypeName name, TypeAge age) : m_Name(name), m_Age(age) {}
//
//	void showInfo()
//	{
//		cout << "姓名：" << m_Name << endl
//			<< "年龄：" << m_Age << endl;
//	}
//
//	TypeAge m_Age;
//
//	TypeName m_Name;
//};
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//	p1.showInfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}