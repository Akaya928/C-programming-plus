//1.vector Ҳ��������������
//2.��֮ͬ���������Ǿ�̬�ռ䣬vector���Զ�̬��չ
//3.��̬��չ��
//��������ԭ�еĿռ�֮����չ�������Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ������µĿռ䣬���ͷ�ԭ�ռ�

//vector�����ĵ�������֧��������ʵ�
//vector<T> v ��һЩ�ӿ�api

//v.at(int idx) === v[int idx]
//v.front() && v.back()   ���������еĵ�һ������Ԫ�� && �������������һ������Ԫ��
//v.begin() && v.end()    ָ���һ��Ԫ�� && ָ�����һ��Ԫ�ص���һ��λ��
//v.rend()  && v.rbegin() ָ���һ��Ԫ�ص�ǰһ��λ�� && ָ�����һ��Ԫ��
//v.push_back() && v.pop_back() β�� && βɾ
//v.swap(vec)  ��v��vec��Ԫ�ػ��� ��������swap()�����ڴ棨�����������
//v.reserve(int len) ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

//vector������ֵ������
//assign(beg, end)
//assign(n, elem)
//vector& operator=(const vector &vec)

//ɾ��ָ���Ԫ�� && ��ָ��λ�ò���Ԫ��
//ɾ���Ͳ����ṩ��λ��posΪ������vector<T>::iterator
//v.erase(pos)
//v.erase(beg, end)
//v.insert(pos, elem)
//v.insert(pos, n, elem)
//v.insert(pos, beg, end) 


//�Ƿ�Ϊ��	����			 ��С	  ���·����С
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
//	//����swap()�����ڴ棨�����������
//	//��������ǰ��ִ�н�����ϵͳ���������յ��������� ���c++����������������-��ĿIII-Դ�ļ�2.cpp
//	vector<int>(v).swap(v); //�ȴ���һ��vector<int>�͵���������x������v��ʼ����������x��Ȼ������swap()��x��v������ʵ���ڴ�����
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