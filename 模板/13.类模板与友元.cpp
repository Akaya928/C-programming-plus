//ȫ�ֺ�������ʵ�� �� ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� �� ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//�ܽ᣺����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��  ����ʵ�ֱȽϸ���

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//
////����ʵ�� ��ʽһ �ñ�������ǰ֪��  ������ģ���ȫ�ֺ���
//template<class T1, class T2>
//void showInfo3(Person<T1, T2> p3)
//{
//	cout << "����ʵ��-��ʽһ-name: " << p3.name << endl
//		<< "����ʵ��-��ʽһ-age: " << p3.age << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//1.ȫ�ֺ��� ����ʵ��
//	friend void showInfo1(Person<T1, T2> p1)
//	{
//		cout << "����ʵ��-name: " << p1.name << endl
//			<< "����ʵ��-age: " << p1.age << endl;
//	}
//
//	//2.ȫ�ֺ��� ����ʵ��
//	//2.1���ȫ�ֺ��� ������ʵ�֣���ʽһ ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��� �����Ͽ�ģ������б�
//	friend void showInfo3<>(Person<T1, T2> p3);
//	
//
//	//2.2���ȫ�ֺ��� ������ʵ�֣���ʽ�� ����������ʱ�����߱���������ģ��
//	template<class T1, class T2>
//	friend void showInfo2(Person<T1, T2> p2);
//
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//private:
//
//	T1 name;
//
//	T2  age;
//};
//
////����ʵ�� ��ʽ��
//template<class T1, class T2>
//void showInfo2(Person<T1, T2> p2)
//{
//	cout << "����ʵ��-��ʽ��-name: " << p2.name << endl
//		<< "����ʵ��-��ʽ��-age: " << p2.age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//
//	showInfo1(p1);
//}
//
//void test02()
//{
//	Person<string, int> p2("Dave", 20);
//
//	showInfo2(p2);
//}
//
//void test03()
//{
//	Person<string, int> p3("Jose", 21);
//
//	showInfo3(p3);
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	test03();
//
//	return 0;
//}