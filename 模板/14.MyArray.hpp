//�Լ���ͨ�õ�������
#pragma once
#include<iostream>

using namespace std;

template<class T>
class MyArray
{
public:

	//�вι��� ���� ����
	MyArray(int capacity)
	{
		//cout << "MyArray�вι������" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray�����������" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->pAddress = arr.pAddress; �ᷢ��ǳ�������⣨���������ظ��ͷţ�

		//�������
		this->pAddress = new T[arr.m_capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		//���
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨
	void pushBack(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_size == this->m_capacity)
		{
			cout << "enough! No room to set in!" << endl;
			return;
		}
		this->pAddress[this->m_size] = val;  //������ĩβ��������
		this->m_size++;  //���������С
	}

	//βɾ��
	void popBack()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��  ����[]
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_capacity;
	}

	//��������Ĵ�С
	int getSize()
	{
		return this->m_size;
	}

	//��������
	~MyArray()
	{	
		if (this->pAddress != NULL)
		{
			//cout << "MyArray������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:

	T* pAddress;  //ָ��ָ��������ٵ���ʵ����
	int m_size;  //����Ĵ�С
	int m_capacity;  //��������
};