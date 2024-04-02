//map/multimap容器（高效率、高性能）
//1.map基本概念：
//1.1.map中所有元素都是pair（对组）
//1.2.pair中第一个元素为key（键值），起到索引的作用；第二个元素为value（实值）
//1.3.所有元素都会根据元素的键值自动排序
//2.本质：
//map/multimap属于关联式容器，底层结构是用二叉树实现。
//3.优点：
//可以根据键值（key）快速找到实值（value）
//4.map和multimap的区别：
//4.1.map不允许容器中有重复key的元素
//4.2.multimap允许容器中有重复key的元素


//测试时,注意将无关的test函数注释掉
//#include<iostream>
//#include<map>
//
//using namespace std;
//
////自定义数据类型Person
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//
//		this->age = age;
//	}
//
//	string name;
//
//	int age;
//
//};
//
////仿函数,且对自定义数据指定排序规则
////按照年龄升序;且当年龄相同时,按照字母升序
//class CompareMap
//{
//public:
//	bool operator()(const Person& p1, const Person p2) const
//	{
//		if (p1.age == p2.age)
//		{
//			return p1.name < p2.name;
//		}
//		else
//		{
//			return p1.age < p2.age;
//		}
//	}
//};
//
////API of output(key:int, value:int)
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "Key: " << (*it).first << "\t"
//			<< "Value: " << it->second << endl;
//	}
//
//	cout << endl;
//}
//
////API of output(重载)(key:int, value:string)
//void printMap(map<int, string>& m)
//{
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "Key: " << (*it).first << "\t"
//			<< "Value: " << it->second << endl;
//	}
//
//	cout << endl;
//}
//
////API of output(重载)(key:Person, value:int, typename:CompareMap)
//void printMap(map<Person, int, CompareMap>& m)
//{
//	for (map<Person, int>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "Name: " << (*it).first.name << "\t"
//			<< "Age: " << it->first.age << "\t"
//			<< "Height: " << it->second << endl;
//	}
//
//	cout << endl;
//}
//
//
////I.基本操作
//void test01()
//{
//	//默认构造
//	map<int, int> m1;
//
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(make_pair(2, 200));
//	m1.insert(pair<int, int>(5, 50));
//	m1.insert(make_pair(4, 400));
//	//m1[4] = 444;
//	m1.insert(pair<int, int>(3, 30));
//
//	//拷贝构造
//	map<int, int> m2(m1);
//
//	//赋值
//	map<int, int> m3 = m1;
//	
//	//输出
//	printMap(m1);
//	printMap(m2);
//	printMap(m3);
//}
//
////II.几种插入方式与删除方式
//void test02()
//{
//	map<int, int> m4;
//
//	//1.插入
//	//注意:
//	//只有第四种才能覆盖旧值
//	//可利用第四种插入方式查找相应key所对应的value,
//	//但如果key值不存在,利用第四种方式查找value时,会创建一个value为0的对组.
//
//	//1.1.中规中矩
//	m4.insert(pair<int, int>(1, 111));
//
//	//1.2.略显偷懒
//	m4.insert(make_pair(2, 222));
//
//	//1.3.略显复杂(装杯)
//	m4.insert(map<int, int>::value_type(3, 333));
//
//	//1.4.尽量少用,不建议进行插入,但可以利用key找到value
//	m4[4] = 444;
//
//	printMap(m4);
//
//	//2.删除
//	//注意:
//	//第二种删除方式的参数时key值
//
//	//2.1.中规中矩,通过迭代器删除
//	m4.erase(m4.begin());
//	printMap(m4);
//
//	//2.2.按照key值删除
//	m4.erase(2);
//	printMap(m4);
//
//	//2.3.按照区间删除
//	m4.erase(m4.begin(), m4.end());
//	printMap(m4);
//	
//	//2.4.清空操作
//	m4.clear();
//	printMap(m4);
//}
//
////III.查找与统计
////函数原型:
////find(key);	  查找key是否存在,返回该键的元素的迭代器;若不存在,则返回map.end();
////count(key);	  统计key的元素个数.对于map,结果为0或1;对于multimap结果整型.
//void test03()
//{
//	map<int, string> m5;
//	m5.insert(pair<int, string>(1, "Minami"));
//	m5.insert(make_pair(2, "Akaya"));
//	m5.insert(map<int, string>::value_type(3, "Shizukou"));
//	m5[4] = "LiSA";
//
//	printMap(m5);
//
//	//1.查找
//	//注意:
//	//find(key)返回值是该键对应元素的迭代器,未找到则返回map.end()
//
//	auto it = m5.find(1);
//
//	if (it != m5.end())
//	{
//		cout << "FOUND IT!" << endl
//			<< "The key is " << (*it).first << "\t"
//			<< "The value is " << it->second << endl;
//	}
//	else
//	{
//		cout << "NOT FOUND!" << endl;
//	}
//
//	//2.统计
//
//	cout << m5.count(5) << endl;
//
//	cout << m5.count(3) << endl;
//}
//
////IV.排序(默认为升序(key为内部数据类型))
////注意:
////当key为自定义数据类型时,需要指定排序规则(配合仿函数)
//
//void test04()
//{
//	map<Person, int, CompareMap> m6;
//
//	Person p1("Minami", 20);
//	Person p2("Shizukou", 28);
//	Person p3("LiSA", 26);
//	Person p4("Akaya", 19);
//	Person p5("Lisa", 19);
//
//	m6.insert(make_pair(p1, 168));
//	m6.insert(make_pair(p2, 165));
//	m6.insert(make_pair(p3, 172));
//	m6.insert(make_pair(p4, 170));
//	m6.insert(make_pair(p5, 160));
//
//	//指定排序规则为
//	//按照年龄升序;且当年龄相同时,按照字母升序
//	printMap(m6);
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
//	test04();
//
//	return 0;
//}