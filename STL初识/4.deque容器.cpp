//deque����(double ended queue)�Ļ������
//1.���ܣ�˫�����飬���Զ�ͷ�˰��Լ�β�˽��в���ɾ������
//2.deque��vector������
//2.1.vector��ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��С��Խ��
//2.2.deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȱ�vector��
//2.3.vector����Ԫ��ʱ���ٶȱ�deque�죬��������ڲ���ʵ���й�

//3.deque�ڲ�����ԭ��
//3.1.deque�ڲ��и��п�����ά��ÿ�λ������е����ݣ��������д����ʵ����
//3.2.�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�

//deque�����ĵ�����Ҳ��֧��������ʵ�
//deque<T> d ��һЩapi

//d.push_front() && d.pop_front()  ͷ�� && ͷɾ
//d.push_back()  && d.pop_back()   β�� && βɾ
//d.begin()      && d.end()        ָ���һ��Ԫ�� && ָ�����һ��Ԫ�ص���һ��λ��
//d.front()      && d.back()       ���������еĵ�һ������Ԫ�� && �������������һ������Ԫ��

//deque������ֵ������
//assign(beg, end)
//assign(n, elem)
//deque& operator=(const deque &deq)


//��ָ��λ�ò���Ԫ�� && ɾ��ָ���Ԫ��
//ɾ���Ͳ����ṩ��λ��posΪ������deque<T>::iterator
//v.insert(pos, elem)
//v.insert(pos, n, elem)
//v.insert(pos, beg, end)
//v.erase(pos)
//v.erase(beg, end)

//ע��: deque������û�������ĸ���ģ����ڲ��ṹ����û������������
//vectorֻ��һ���ռ䣬deque�Ƕ��С�ռ�ƴ�Ӷ��ɵ�ֻ��С�ռ����˲Żᴴ���¿ռ䣬�յĿռ��ɾ��
//d.empty                 �Ƿ�Ϊ��
//d.size()                ��С
//d.resize(int num)       ���·����С
//d.resize(int num, elem) ���·����С

//deque�������������
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
//	//��ֵ��ʽһ ����forѭ�� �� ������ ��deque������ֵ��ǰ�᣺������С��֪��
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); ++it, --i)
//	{
//		*it = i;
//	}
//
//	//��ӡ
//	printDeque(d1);
//
//	//�����㷨 sort Ĭ������
//	//����֧�ֵ�����������ʵ�����������������sort�㷨ֱ�Ӷ�������
//	sort(d1.begin(), d1.end());
//
//	cout << "\n�����: " << endl;
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}