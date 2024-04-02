//C++另一种编程思想称为 泛型编程，主要利用的技术就是模板
//C++提供两种模板机制：函数模板和类模板

//一.函数模板语法
//1。函数模板的作用：
//建立一个通用的函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表

//2.语法：
//template<typename T>
//函数声明或定义

//3.解释：
//      template --- 声明创建模板
//      typename --- 表明其后面的符号是一种数据类型，可以用class代替
//      T        --- 通用的数据类型，名称可以替换，通常为大写字母

//3.总结：
//1.函数模板利用关键字template
//2.使用函数模板由两种方式：自动类型推导，显示指定类型
//3.模板的目的是为了提高复用性，将类型参数化

//#include<iostream>
//
//using namespace std;
//
//template<typename T>  //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	double c = 30.13;
//	double d = 40.14;
//	//1.自动类型推导
//	mySwap(a, b);
//	//2.显示指定类型
//	mySwap<double>(c, d);
//
//	cout << "a = " << a << endl
//		<< "b = " << b << endl
//		<< "c = " << c << endl
//		<< "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//二.函数模板的注意事项
//1.自动类型推导，必须推导出一致的数据类型 T，才可以使用
//2.模板必须要确定出 T 的数据类型，才可以使用

//3.总结：
//使用模板时必须确定出通用数据类型T，并且能推导出一致的数据类型

//#include<iostream>
//
//using namespace std;
//
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.自动类型推导，必须推导出一致的数据类型 T，才可以使用
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	
//	mySwap(a, b);//正确
//	//mySwap(a, c);  错误 a 和 c 的数据类型不一致
//
//	cout << "a = " << a << endl
//		<< "b = " << b << endl
//		<< "c = " << c << endl;
//}
//
//template<typename T>
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//
////2.模板必须要确定出 T 的数据类型，才可以使用
//void test03()
//{
//	//func();  错误 未确定出 T 的数据类型
//	func<int>();//正确
//}
//
//int main()
//{
//	test02();
//	test03();
//
//	return 0;
//}