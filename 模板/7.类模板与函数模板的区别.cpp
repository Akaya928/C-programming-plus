//类模板与函数模板区别主要有两点
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数

//总结：
//1.类模板的使用只能用显示指定类型的方式
//2。类模板中的模板参数列表可以有默认参数

//#include<iostream>
//
//using namespace std;
//
//template<class TypeName, class TypeAge = int>
//class Person
//{
//public:
//
//	Person(TypeName name, TypeAge age)
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
//	TypeName name;
//
//	TypeAge age;
//};
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//	//1.类模板没有自动类型推导的使用方式
//	//Person p3("Joes", 20);  错误 类模板没有自动类型推导的使用方式
//    //2.类模板在模板参数列表中可以有默认参数
//	Person<string> p2("Dave", 19);
//
//	p1.showInfo();
//	p2.showInfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}