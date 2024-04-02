//I.STL��ʶ
//1.STL�ĵ�����
//1.1.Ϊ�˽������ݽṹ���㷨��һ�ױ�׼��������STL

//2.STL�������
//2.1.STL(Standard Template Library,��׼ģ���)
//2.2.STL�ӹ����Ϸ�Ϊ��������containter���㷨��algorithm����������iterator��
//2.3.�������㷨ֱ��ͨ�������������޷�����
//2.4.STL�������еĴ��붼������ģ�������ģ�庯��

//3.STL���������
//STL�����Ϊ����������ֱ��ǣ��������㷨�����������º��������������������
//3.1.�������������ݽṹ����vector��list��deque��set��map�ȣ������������
//3.2.�㷨�����ֳ����㷨����sort��find��copy��each��
//3.3.���������������������㷨֮��Ľ��ϼ�
//3.4.�º�������Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ��ԡ����º�����������������أ�
//3.5.��������һ�����������������߷º������ߵ������ӿڵĶ���
//3.6.�ռ�������������ռ�����������


////II.vector���������������
////containter: vector
////algorithm: for_each����������ֱ����㷨��
////iterator: vector<T>::iterator
//
//#include<iostream>
//#include<vector>
//#include<algorithm> //��׼�㷨ͷ�ļ�
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
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end(); //���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//��һ�ֱ�����ʽ
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		++itBegin;
//	}*/
//
//	//�ڶ��ֱ�����ʽ
//	/*for (auto it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << endl;
//	}*/
//
//	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨 for_each
//	//for_each(v.begin(), v.end(), myPrint);
//
//	//���䣺�����ֱ�����ʽ ��Χforѭ�� for( : ) {} �����б׶� ���C++ Primer
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


//III.vector����Զ�����������

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
//	//������ʽһ ����for_each�㷨
//	for_each(v.begin(), v.end(), myPrint);
//
//	//������ʽ�� ��forѭ���͵�����ʵ�֣�����������ָ�룩
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it) //�õ��������ָ�� �����ڶ���ָ�� �����õ������õ�����һ��Person�͵�ָ��
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


//IV.����Ƕ������  �����ڶ�ά����
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
//	vector<vector<int>> v{ v1, v2,v3,v4 }; //��ʼ��������v
//
//	//��ֵ�����������е�Ԫ�أ���С����v1��v2��v3��v4����ֵ��
//	size_t size = v.size();
//	for (vector<vector<int>>::iterator i = v.begin(); i != v.end(); ++i, --size)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			i->push_back(j);
//		}
//	}
//
//	//������ʽһ ���÷�Χforѭ��ʵ��
//	for (auto &it : v) //ע��auto &it ���C++Primer �������ô��� �������Ч��
//	{
//		for (auto itI : it)
//		{
//			cout << itI << " ";
//		}
//		cout << endl;
//	}
//
//	//������ʽ�� ���õ�������forѭ��ʵ��
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
//	//������ʽ�� ����STL�ṩ�ı����㷨 for_each ʵ��
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}