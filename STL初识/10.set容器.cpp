//1.�����������Ԫ�ض����ڲ���ʱ�Զ�����
//2.���ʣ�set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//3.set/multiset����
//3.1.set�������������ظ���Ԫ��
//3.2.multiset�������������ظ���Ԫ��


//I.��������
//#include<iostream>
//#include<set>
//
//using namespace std;
//
////��������ӿ�
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << "\t";
//	}
//
//	cout << endl;
//}
//
//void test01()
//{
//	//Ĭ�Ϲ���
//	set<int> s1;
//
//	//����insert����Ԫ��
//	s1.insert(455);
//	s1.insert(233);
//	s1.insert(456);
//	s1.insert(234); //set��������������ظ���Ԫ�أ������������ᱨ��
//	s1.insert(234);
//	s1.insert(234);
//	s1.insert(11234);
//
//	printSet(s1);
//
//	//��������
//	set<int> s2(s1);
//
//	printSet(s2);
//
//	//��ֵ����
//	set<int> s3;
//	s3 = s2;
//
//	printSet(s3);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//II.multiset��set���� ����pair
//#include<iostream>
//#include<set>
//
//using namespace std;
//
////set pairib
//void test01()
//{
//	set<int> s1;
//
//	pair<set<int>::iterator, bool> ret = s1.insert(455);
//
//	if (ret.second)
//	{
//		cout << "The first insertion succeeded!" << endl;
//	}
//	else
//	{
//		cout << "The first insertion failed!" << endl;
//	}
//
//
//	ret = s1.insert(455);
//
//	if (ret.second)
//	{
//		cout << "The second insertion succeeded!" << endl;
//	}
//	else
//	{
//		cout << "The second insertion failed!" << endl;
//	}
//}
//
////multiset pair
//void test02()
//{
//	multiset<int> muls;
//
//	muls.insert(122);
//	muls.insert(122);
//	muls.insert(122);
//	muls.insert(122);
//	muls.insert(122);
//
//	for (auto it = muls.begin(); it != muls.end(); ++it)
//	{
//		cout << *it << "\t";
//	}
//
//	cout << endl;
//
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


//III.pair����ʹ��
//1.�����������ɶԳ��ֵ����ݣ����ö�����Է�������������
//2.������ʽ��
//2.1.pair<type, type> p(value1, value2);
//2.2.pair<type, type> p = make_pair(value1, value2);
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test01()
//{
//	//The first way to create it
//	pair<string, int> p1("Minami", 20);
//
//	//The second way to creat it
//	pair<string, int> p2 = make_pair("Akaya", 19);
//
//	//Output
//	cout << "Name: " << p1.first << "\t" << "Age: " << p1.second << endl
//		<< "Name: " << p2.first << "\t" << "Age: " << p2.second << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//IV.set��������Ĭ��Ϊ�����Լ��ı�������������÷º������º����������غ��������()��
//#include<iostream>
//#include<set>
//
//using namespace std;
//
////��Ϊ����set<typename, typename, typename>����Ҫ��һ���������ͣ���������(class)��д�º���
//class MyCompare
//{
//public:
//	bool operator()(const int v1, const int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << "\t";
//	}
//
//	cout << endl;
//}
//
//void test01()
//{
//	//Ĭ������ ����
//	set<int> s1;
//	s1.insert(123);
//	s1.insert(234);
//	s1.insert(4356);
//	s1.insert(122);
//	s1.insert(133);
//	s1.insert(566744);
//	s1.insert(566743);
//	s1.insert(3456);
//
//	printSet(s1);
//
//	//���÷º����ı�������� ����
//	set<int, MyCompare> s2;
//	s2.insert(123);
//	s2.insert(234);
//	s2.insert(4356);
//	s2.insert(122);
//	s2.insert(133);
//	s2.insert(566744);
//	s2.insert(566743);
//	s2.insert(3456);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); ++it)
//	{
//		cout << *it << "\t";
//	}
//
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//V.�Զ����������Ͳ�ָ���������
//��set��������Զ�����������ʱ����Ҫ�÷º���ָ���������
//#include<iostream>
//#include<set>
//
//class Person
//{
//public:
//	Person(std::string name, int age)
//	{
//		this->age = age;
//
//		this->name = name;
//	}
//
//	std::string name;
//
//	int age;
//};
//
////��д�º���ָ���Զ����������͵��������
////�������������������ͬ������ĸ����
//class ComparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		if (p1.age == p2.age)
//		{
//			return p1.name < p2.name;
//		}
//
//		return p1.age < p2.age;
//	}
//};
//
//void setPerson(std::set<Person, ComparePerson>& s)
//{
//	Person p1("Minami", 20);
//	Person p2("Jeff", 23);
//	Person p3("Jose", 21);
//	Person p4("Dave", 27);
//	Person p5("Sara", 19);
//	Person p6("Jhon", 30);
//	Person p7("Lisa", 21);
//	Person p8("LiSA", 28);
//	Person p9("Tom", 21);
//	Person p10("Kate", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//	s.insert(p6);
//	s.insert(p7);
//	s.insert(p8);
//	s.insert(p9);
//	s.insert(p10);
//}
//
//void printPerson(std::set<Person, ComparePerson>& s)
//{
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		std::cout << "Name: " << it->name << "\t"
//			<< "Age: " << it->age << std::endl;
//	}
//}
//
//int main()
//{
//	std::set<Person, ComparePerson> s;
//
//	setPerson(s);
//
//	printPerson(s);
//
//	return 0;
//}