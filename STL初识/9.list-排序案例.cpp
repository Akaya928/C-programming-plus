//������������Person�Զ����������ͽ�������Person�����������������䡢���
//������򣺰�����������������������ͬ������߽��н���
//�����߼��ɲο� "5.STL����1-��ί���"

//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age, int height)
//	{
//		this->name = name;
//
//		this->age = age;
//
//		this->height = height;
//	}
//
//	int age;
//
//	int height;
//
//	string name;
//};
//
//bool comparePerson(Person& p1, Person& p2)
//{
//	//������ͬʱ������߽���
//	if (p1.age == p2.age)
//	{
//		return p1.height > p2.height;
//	}
//
//	//����������
//	return p1.age < p2.age;
//}
//
//void printPerson(list<Person>& lst)
//{
//	for (list<Person>::iterator it = lst.begin(); it != lst.end(); ++it)
//	{
//		cout << "Name: " << it->name << " "
//			<< "\tAge: " << it->age << " "
//			<< "\tHeight: " << it->height << endl;
//		if (it == --lst.end())
//		{
//			cout << endl;
//		}
//	}
//}
//
//void setPerson(list<Person>& lst)
//{
//	Person p1("Sara", 19, 170);
//	Person p2("Dave", 20, 173);
//	Person p3("Jose", 23, 175);
//	Person p4("Jeff", 17, 170);
//	Person p5("Akaya", 19, 164);
//	Person p6("Minami", 18, 168);
//
//	lst.push_back(p1);
//	lst.push_back(p2);
//	lst.push_back(p3);
//	lst.push_back(p4);
//	lst.push_back(p5);
//	lst.push_back(p6);
//}
//
//void sortPerson(list<Person>& lst)
//{
//	lst.sort(comparePerson);
//
//	cout << "���������򣬲���������ͬʱ������߽���" << endl;
//}
//
//int main()
//{
//	list<Person> lst;
//
//	setPerson(lst);
//
//	printPerson(lst);
//
//	sortPerson(lst);
//
//	printPerson(lst);
//
//	return 0;
//}