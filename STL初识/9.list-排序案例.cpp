//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同则按照身高进行降序
//代码逻辑可参考 "5.STL案例1-评委打分"

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
//	//年龄相同时，按身高降序
//	if (p1.age == p2.age)
//	{
//		return p1.height > p2.height;
//	}
//
//	//按年龄升序
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
//	cout << "按年龄升序，并在年龄相同时，按身高降序：" << endl;
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