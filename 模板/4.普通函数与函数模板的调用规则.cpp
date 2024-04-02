//调用规则如下：
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强调调用韩硕模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

//总结：
//既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

//#include<iostream>
//
//using namespace std;
//
//void myPrint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用函数模板" << endl;
//}
//
////1.如果函数模板和普通函数都可以实现，优先调用普通函数
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);
//}
//
////2.可以通过空模板参数列表来强调调用韩硕模板
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	myPrint<>(a, b);  //空模板参数列表
//}
//
////3.函数模板也可以发生重载
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的函数模板" << endl;
//}
//
//void test03()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	myPrint<int>(a, b, c);  //显示类型转换
//}
//
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
//void test04()
//{
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);  //模板不用发生隐式类型转换 可以产生更好的匹配
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	test04();
//
//	return 0;
//}