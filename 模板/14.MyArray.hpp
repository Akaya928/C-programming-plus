//自己的通用的数组类
#pragma once
#include<iostream>

using namespace std;

template<class T>
class MyArray
{
public:

	//有参构造 参数 容量
	MyArray(int capacity)
	{
		//cout << "MyArray有参构造调用" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray拷贝构造调用" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->pAddress = arr.pAddress; 会发生浅拷贝问题（堆区数据重复释放）

		//进行深拷贝
		this->pAddress = new T[arr.m_capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray operator=调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		//深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//尾插法
	void pushBack(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_size == this->m_capacity)
		{
			cout << "enough! No room to set in!" << endl;
			return;
		}
		this->pAddress[this->m_size] = val;  //在数组末尾加入数据
		this->m_size++;  //更新数组大小
	}

	//尾删法
	void popBack()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//通过下标的方式访问数组中的元素  重载[]
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_capacity;
	}

	//返回数组的大小
	int getSize()
	{
		return this->m_size;
	}

	//析构函数
	~MyArray()
	{	
		if (this->pAddress != NULL)
		{
			//cout << "MyArray析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:

	T* pAddress;  //指针指向堆区开辟的真实数组
	int m_size;  //数组的大小
	int m_capacity;  //数组容量
};