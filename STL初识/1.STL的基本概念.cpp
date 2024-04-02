//I.STL初识
//1.STL的诞生：
//1.1.为了建立数据结构和算法的一套标准，诞生了STL

//2.STL基本概念：
//2.1.STL(Standard Template Library,标准模板库)
//2.2.STL从广义上分为：容器（containter）算法（algorithm）迭代器（iterator）
//2.3.容器和算法直接通过迭代器进行无缝连接
//2.4.STL几乎所有的代码都采用了模板类或者模板函数

//3.STL六大组件：
//STL大体分为六大组件，分别是：容器、算法、迭代器、仿函数、适配器（配接器）
//3.1.容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据
//3.2.算法：各种常用算法，如sort、find、copy、each等
//3.3.迭代器：扮演了容器和算法之间的胶合剂
//3.4.仿函数：行为类似函数，可作为算法的某种策略。（仿函数即函数运算符重载）
//3.5.适配器：一种用来修饰容器或者仿函数或者迭代器接口的东西
//3.6.空间配置器：负责空间的适配与管理


////II.vector存放内置数据类型
////containter: vector
////algorithm: for_each（详见第三种遍历算法）
////iterator: vector<T>::iterator
//
//#include<iostream>
//#include<vector>
//#include<algorithm> //标准算法头文件
//
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器中的第一个元素
//	vector<int>::iterator itEnd = v.end(); //结束迭代器 指向容器中最后一个元素的下一个位置
//
//	//第一种遍历方式
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		++itBegin;
//	}*/
//
//	//第二种遍历方式
//	/*for (auto it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << endl;
//	}*/
//
//	//第三种遍历方式 利用STL提供的遍历算法 for_each
//	//for_each(v.begin(), v.end(), myPrint);
//
//	//补充：第四种遍历方式 范围for循环 for( : ) {} 但是有弊端 详见C++ Primer
//	for (auto it : v)
//	{
//		cout << it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//III.vector存放自定义数据类型

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	int age;
//	string name;
//};
//
//void test01()
//{
//	Person p1("Sara", 19);
//	Person p2("Jhon", 18);
//	Person p3("Dave", 20);
//	Person p4("Jose", 21);
//
//	vector<Person> v;
//
//	v = {p1, p2, p3, p4};
//
//	for (auto &it : v)
//	{
//		cout << "Name: " << it.name << endl
//			<< "Age: " << it.age << endl;
//	}
//}
//
//void myPrint(Person* ptr)
//{
//	cout << ptr << " Name: " << ptr->name << " age: " << ptr->age << endl;
//}
//
//void test02()
//{
//	Person p1("Sara", 19);
//	Person p2("Jhon", 18);
//	Person p3("Dave", 20);
//	Person p4("Jose", 21);
//
//	vector<Person*> v{ &p1, &p2, &p3, &p4 };
//
//	//遍历方式一 利用for_each算法
//	for_each(v.begin(), v.end(), myPrint);
//
//	//遍历方式二 用for循环和迭代器实现（迭代器类似指针）
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it) //用迭代器存放指针 类似于二级指针 解引用迭代器得到的是一个Person型的指针
//	{
//		cout << *it
//			<< " age: " << (*it)->age << " name: " << (*it)->name << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	return 0;
//}


//IV.容器嵌套容器  类似于二维数组
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void myPrint(vector<int> vI)
//{
//	for (auto val : vI)
//	{
//		cout << val << " ";
//	}
//
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	vector<vector<int>> v{ v1, v2,v3,v4 }; //初始化大容器v
//
//	//赋值（给大容器中的元素（即小容器v1，v2，v3，v4）赋值）
//	size_t size = v.size();
//	for (vector<vector<int>>::iterator i = v.begin(); i != v.end(); ++i, --size)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			i->push_back(j);
//		}
//	}
//
//	//遍历方式一 利用范围for循环实现
//	for (auto &it : v) //注意auto &it 详见C++Primer 利用引用传参 提高运行效率
//	{
//		for (auto itI : it)
//		{
//			cout << itI << " ";
//		}
//		cout << endl;
//	}
//
//	//遍历方式二 利用迭代器和for循环实现
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		for (vector<int>::iterator itI = (*it).begin(); itI != (*it).end(); ++itI)
//		{
//			cout << *itI << " ";
//		}
//
//		cout << endl;
//	}
//
//	//遍历方式三 利用STL提供的遍历算法 for_each 实现
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}