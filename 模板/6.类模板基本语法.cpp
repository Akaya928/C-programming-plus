//1.��ģ������ã�
//����һ��ͨ���࣬���еĳ�Ա�������Ϳ��Բ������ƶ�����һ�����������������

//2.�﷨��
//template<class T>
//��

//3.���ͣ�
//      template --- ��������ģ��
//      class --- ���������ķ�����һ���������ͣ�������typename����
//      T        --- ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ

//4.�ܽ᣺
//��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class TypeName, class TypeAge>
//class Person
//{
//public:
//
//	Person(TypeName name, TypeAge age) : m_Name(name), m_Age(age) {}
//
//	void showInfo()
//	{
//		cout << "������" << m_Name << endl
//			<< "���䣺" << m_Age << endl;
//	}
//
//	TypeAge m_Age;
//
//	TypeName m_Name;
//};
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//	p1.showInfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}