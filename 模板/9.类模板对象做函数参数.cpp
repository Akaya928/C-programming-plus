//��ģ��ʵ�������Ķ����������εķ�ʽ
//һ�������ִ��뷽ʽ��
//1.ָ����������� --- ֱ����ʾ������������ͣ�ʵ�ʿ����г��ã�
//2.����ģ�廯     --- �������еĲ�����Ϊģ����д���
//3.������ģ�廯   --- �������������ģ�廯���д���

//�ܽ᣺
//1.ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
//2.ʹ�ñȽϹ㷺���ǵ�һ�֣�ָ�����������

//#include<iostream>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	void showInfo()
//	{
//		cout << "������" << this->name << endl
//			<< "���䣺" << this->age << endl;
//	}
//
//	T1 name;
//
//	T2 age;
//};
//
////1.ָ����������ͣ�ʵ�ʿ����г��ã�
//void printPerson1(Person<string, int>&p1)
//{
//	p1.showInfo();
//}
//
//void test01()
//{
//	Person<string, int>p1("Sara", 19);
//	printPerson1(p1);
//}
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p2)
//{
//	p2.showInfo();
//
//	cout << "type of T1: " << typeid(T1).name() << endl
//		<< "type of T2: " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p2("Dave", 19);
//	printPerson2(p2);
//}
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T &p2)
//{
//	p2.showInfo();
//
//	cout << "type of T: " << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p3("Joes", 20);
//	printPerson3(p3);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	return 0;
//}