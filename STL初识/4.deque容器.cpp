//deque容器(double ended queue)的基本概念：
//1.功能：双端数组，可以对头端吧以及尾端进行插入删除操作
//2.deque与vector的区别：
//2.1.vector对头部的插入删除效率低，数据量越大，小略越低
//2.2.deque相对而言，对头部的插入删除速度比vector快
//2.3.vector访问元素时的速度比deque快，这和两者内部的实现有关

//3.deque内部工作原理：
//3.1.deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
//3.2.中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

//deque容器的迭代器也是支持随机访问的
//deque<T> d 的一些api

//d.push_front() && d.pop_front()  头插 && 头删
//d.push_back()  && d.pop_back()   尾插 && 尾删
//d.begin()      && d.end()        指向第一个元素 && 指向最后一个元素的下一个位置
//d.front()      && d.back()       返回容器中的第一个数据元素 && 返回容器中最后一个数据元素

//deque容器赋值操作：
//assign(beg, end)
//assign(n, elem)
//deque& operator=(const deque &deq)


//向指定位置插入元素 && 删除指向的元素
//删除和插入提供的位置pos为迭代器deque<T>::iterator
//v.insert(pos, elem)
//v.insert(pos, n, elem)
//v.insert(pos, beg, end)
//v.erase(pos)
//v.erase(beg, end)

//注意: deque容器是没有容量的概念的，其内部结构中是没有容量的限制
//vector只有一个空间，deque是多个小空间拼接而成的只有小空间满了才会创建新空间，空的空间会删掉
//d.empty                 是否为空
//d.size()                大小
//d.resize(int num)       重新分配大小
//d.resize(int num, elem) 重新分配大小

//deque容器的排序操作
//#include<iostream>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
//
//void printDeque(deque<int> &d)
//{
//	for (auto dIt = d.begin(); dIt != d.end(); ++dIt)
//	{
//		cout << *dIt << " ";
//	}
//}
//
//void test01()
//{
//	deque<int> d1(10);
//	int i = 10;
//
//	//赋值方式一 利用for循环 和 迭代器 对deque容器赋值（前提：容器大小已知）
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); ++it, --i)
//	{
//		*it = i;
//	}
//
//	//打印
//	printDeque(d1);
//
//	//排序算法 sort 默认升序
//	//对于支持迭代器随机访问的容器，都可以利用sort算法直接对其排序
//	sort(d1.begin(), d1.end());
//
//	cout << "\n排序后: " << endl;
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}