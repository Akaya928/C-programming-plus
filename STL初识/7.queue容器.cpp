//1.queue(队列) 基本概念：
//queue是一种先进先出(First In First Out,FIFO)的数据结构，它有两个出口
//队列容器允许从一端新增元素，从另一端移除元素
//队列只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据称为 ---入队 push
//队列中出数据称为 ---出队 pop

//2.queue 常用接口
//2.1.构造函数：
//queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
//queue(const queue &que); //拷贝构造函数

//2.2.赋值操作：
//queue& operator=(const queue &que); //重载等号操作符

//2.3.数据存取：
//push(elem); //往队尾添加元素
//pop(); //从队头移除第一个元素
//back(); //返回最后一个元素
//front(); //返回第一个元素

//2.4.大小操作：
//empty(); //判断队列是否为空
//size(); //返回队列的大小

//#include<iostream>
//#include<queue>
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
//
//		this->age = age;
//	}
//
//	string name;
//
//	int age;
//};
//
//queue<Person> que;
//
//void test01()
//{
//	Person p1("Sara", 19);
//	Person p2("Dave", 20);
//	Person p3("Minami", 19);
//	Person p4("Jose", 21);
//
//	que.push(p1);
//	que.push(p2);
//	que.push(p3);
//	que.push(p4);
//
//	cout << "The size of que: " << que.size() << endl;
//
//	while (!que.empty())
//	{
//		cout << "The front of que: " << "\tName: " << que.front().name << "\tAge: " << que.front().age << endl;
//		cout << "The back of que: " << "\tName: " << que.back().name << "\tAge: " << que.back().age << endl;
//
//		que.pop();
//	}
//
//	cout << "The size of que: " << que.size() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}