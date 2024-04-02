//1.list基本概念
//功能：将数据进行链式存储
//链表(list)是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成：由一系列节点组成
//节点的组成：由两部分组成，一个是存储数据元素的数据域，另一个是存储下一个节点地址的指针域
//STL中的链表(list)是一个双向循环链表
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器

//2.链表的优点：
//2.1.可以对任意位置进行快速插入或删除元素
//2.2.采用动态存储分配，不会造成内存的浪费和溢出
//2.3.list有一个重要性质，插入操作和删除操作都不会造成原有的迭代器的失效，这在vector容器中是不成立的

//3.链表的缺点：
//3.1.链表灵活，但是空间(指针域)和时间(遍历)额外消耗较大，且占用空间比数组大
//3.2.list有一个重要性质，插入操作和删除操作都不会造成原有的迭代器的失效，这在vector容器中是不成立的

//#include<iostream>
//#include<list>
//
//using namespace std;
//
//bool myCompare(int v1, int v2)
//{
//	//降序  就是让第一个数v1 大于 第二个数v2
//	return v1 > v2;
//}
//
//void printList(const list<int> &lst)
//{
//	for (int i: lst)
//	{
//		cout << i << " ";
//	}
//
//	cout << endl;
//}
//
////list的赋值
//void test01()
//{
//	//创建list容器
//	list<int> L1; //默认构造
//
//	//添加元素
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//	L1.push_back(60);
//
//	//遍历容器
//	printList(L1);
//
//	//区间方式构造
//	list<int> L2(++L1.begin(), --L1.end());
//	
//	//遍历容器
//	printList(L2);
//
//	//拷贝构造
//	list<int> L3(L1);
//
//	//遍历容器
//	printList(L3);
//
//	//n个elem
//	list<int> L4(6, 10000);
//
//	//遍历容器
//	printList(L4);
//}
//
////list反转和排序
////函数原型
////reverse()
////sort()
//void test02()
//{
//	list<int> L1;
//	L1.push_back(50);
//	L1.push_back(70);
//	L1.push_back(30);
//	L1.push_back(10);
//	L1.push_back(40);
//	L1.push_back(60);
//
//	//反转前
//	cout << "反转前" << endl;
//	printList(L1);
//
//	//反转后
//	L1.reverse();
//	cout << "反转后" << endl;
//	printList(L1);
//
//	//排序 默认升序
//	L1.sort(); //注意：所有不支持随机访问迭代器的容器，是不可以使用标准算法库
//	           //所以，不支持随机访问迭代器的容器，其内部会提供对应的成员函数来实现相应的算法
//	cout << "默认升序" << endl;
//	printList(L1);
//
//	//排序 借助自定义函数(当然这也是封装好了的) 降序
//	L1.sort(myCompare);
//	cout << "降序" << endl;
//	printList(L1);
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}