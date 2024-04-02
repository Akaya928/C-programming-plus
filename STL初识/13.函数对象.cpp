//I.概念：
//1.重载函数调用操作符的类，其对象常称为函数对象
//2.函数对象使用重载的()时，行为类似函数调用，也叫做仿函数

//II.本质：
//函数对象(仿函数)是一个类，不是一个函数

//III.函数对象的使用：
//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//3.函数对象可以作为参数传递

//#include<iostream>
//
//class MyAdd
//{
//public:
//
//	int operator()(int v1, int v2)
//	{
//
//		return v1 + v2;
//	}
//};
//
////2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//class MyPrint
//{
//public:
//
//	MyPrint()
//	{
//		this->count = 0;
//	}
//
//	void operator()(std::string str)
//	{
//		std::cout << str << std::endl;
//
//		this->count++; //记录调用的次数
//	}
//
//	int count; //内部自己的状态
//};
//
//void test01()
//{
//	std::cout << MyAdd()(6, 5) << std::endl;
//	std::cout << "\n";
//}
//
//void test02()
//{
//	MyPrint()("Shark");
//	MyPrint()("Minami");
//	MyPrint()("Dave");
//	MyPrint()("Power");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark"); //匿名对象 用完就销毁了,所以count记录的是0
//
//	std::cout << "创建匿名对象后，MyPrint()调用的次数" << MyPrint().count << std::endl;
//	std::cout << "\n";
//	
//	MyPrint mp;
//	mp("a");
//	mp("b");
//	mp("c");
//	mp("d");
//	mp("e");
//	mp("f");
//	mp("g");
//	mp("h");
//
//	std::cout << "实例化对象后，MyPrint()调用的次数" << mp.count << std::endl;
//	std::cout << "\n";
//
//}
//
////3.函数对象可以作为参数传递
//void doPrint(MyPrint& mp, std::string str)
//{
//	mp(str);
//}
//
//void test03()
//{
//	MyPrint mp;
//
//	doPrint(mp, "Hello,dude!");
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