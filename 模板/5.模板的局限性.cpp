//ģ���ͨ���Բ��������ܵ�
/* template<typrname T>
 void func(T a, T b)
 {
	if(a > b) { ... }
 }*/
//�����������У����T���������ʹ��������Person�������Զ����������ͣ��޷���������
//���C++Ϊ�˽���������⣬�ṩģ������أ�����Ϊ��Щ�ض������;��廯ģ��


//�ܽ᣺
//1.���þ��廯��ģ�壬���Խ���Զ����������͵�ͨ�û�������������ģ�壬�ض�������д�ض�������
//2.ѧϰģ�岢����Ϊ��дģ�壬������STL���ܹ�����ϵͳ�ṩ��ģ��

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age) : m_Name(name), m_Age(age)
//	{
//
//	}
//
//	string m_Name;
//
//	int m_Age;
//};
//
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	if (myCompare(a, b))
//	{
//		cout << "a = b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
////���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
//template<> bool myCompare(Person &p1, Person &p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test02()
//{
//	Person p1("Sara", 19), p2("Sara", 19);
//
//	if (myCompare(p1, p2))
//	{
//		cout << "p1 = p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}