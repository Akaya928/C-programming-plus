//1.vector 也被称作单端数组
//2.不同之处：数组是静态空间，vector可以动态扩展
//3.动态扩展：
//并不是在原有的空间之后扩展，而是找更大的内存空间，然后将原数据拷贝到新的空间，并释放原空间

//vector容器的迭代器是支持随机访问的
//vector<T> v 的一些接口api

//v.at(int idx) === v[int idx]
//v.front() && v.back()   返回容器中的第一个数据元素 && 返回容器中最后一个数据元素
//v.begin() && v.end()    指向第一个元素 && 指向最后一个元素的下一个位置
//v.rend()  && v.rbegin() 指向第一个元素的前一个位置 && 指向最后一个元素
//v.push_back() && v.pop_back() 尾插 && 尾删
//v.swap(vec)  将v与vec的元素互换 另外巧用swap()收缩内存（结合匿名对象）
//v.reserve(int len) 容器预留len个元素长度，预留位置不初始化，元素不可访问

//vector容器赋值操作：
//assign(beg, end)
//assign(n, elem)
//vector& operator=(const vector &vec)

//删除指向的元素 && 向指定位置插入元素
//删除和插入提供的位置pos为迭代器vector<T>::iterator
//v.erase(pos)
//v.erase(beg, end)
//v.insert(pos, elem)
//v.insert(pos, n, elem)
//v.insert(pos, beg, end) 


//是否为空	容量			 大小	  重新分配大小
//v.empty() v.capacity() v.size() v.resize(int num) v.resize(int num, elem)

//#include<iostream>
//#include<vector>
//#include<deque>
//
//using namespace std;
//
//void printDeque(deque<int>const &d)
//{
//	for (deque<int>::const_iterator dIt = d.begin(); dIt != d.end(); ++dIt)
//	{
//		cout << *dIt << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; ++i)
//	{
//		d1.push_back(i + 1);
//	}
//
//	printDeque(d1);
//
//	d1.insert(d1.begin() + 1, 10000);
//
//	printDeque(d1);
//
//	d1.erase(d1.begin());
//
//	printDeque(d1);
//}
//
//void test02()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 100000; ++i)
//	{
//		v.push_back(i);
//	}
//
//	cout << "Capacity: " << v.capacity() << endl
//		<< "Size: " << v.size() << endl;
//
//	//巧用swap()收缩内存（结合匿名对象）
//	//匿名对象当前行执行结束后，系统会立即回收掉匿名对象 详见c++面向对象的三大特征-项目III-源文件2.cpp
//	vector<int>(v).swap(v); //先创建一个vector<int>型的匿名对象x，按照v初始化匿名对象x，然后利用swap()将x和v交换，实现内存收缩
//
//	cout << "Capacity: " << v.capacity() << endl
//		<< "Size: " << v.size() << endl;
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