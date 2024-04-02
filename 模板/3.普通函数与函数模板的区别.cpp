//普通函数与函数模板的区别
//1.普通函数调用时可以发生自动类型转换（隐式类型转换）
//2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//3.如果利用显示指定类型的方式，可以发生隐式类型转换

//总结：
//建议使用显式指定类型的方式 调用函数模板，因为可以自己确定通用类型 T

//#include<iostream>
//
//using namespace std;
//
////普通函数
//int myAdd(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << "a + b = " << myAdd(a, b) << endl;
//	//1.普通函数调用时可以发生自动类型转换（隐式类型转换）
//	cout << "a + c = " << myAdd(a, c) << endl;  //char c 隐式转换成 int 型（'c'的ASCII码 ==> 99）
//}
//
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << "a + b = " << myAdd02(a, b) << endl;
//	//2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//	//cout << "a + c = " << myAdd02(a, c) << endl;  错误 T不确定是换成int还是char
//	//3.如果利用显示指定类型的方式，可以发生隐式类型转换
//	cout << "a + c = " << myAdd02<int>(a, c) << endl;
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}