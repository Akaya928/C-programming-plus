//map/multimap��������Ч�ʡ������ܣ�
//1.map�������
//1.1.map������Ԫ�ض���pair�����飩
//1.2.pair�е�һ��Ԫ��Ϊkey����ֵ���������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//1.3.����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//2.���ʣ�
//map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//3.�ŵ㣺
//���Ը��ݼ�ֵ��key�������ҵ�ʵֵ��value��
//4.map��multimap������
//4.1.map���������������ظ�key��Ԫ��
//4.2.multimap�������������ظ�key��Ԫ��


//����ʱ,ע�⽫�޹ص�test����ע�͵�
//#include<iostream>
//#include<map>
//
//using namespace std;
//
////�Զ�����������Person
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
////�º���,�Ҷ��Զ�������ָ���������
////������������;�ҵ�������ͬʱ,������ĸ����
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
////API of output(����)(key:int, value:string)
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
////API of output(����)(key:Person, value:int, typename:CompareMap)
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
////I.��������
//void test01()
//{
//	//Ĭ�Ϲ���
//	map<int, int> m1;
//
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(make_pair(2, 200));
//	m1.insert(pair<int, int>(5, 50));
//	m1.insert(make_pair(4, 400));
//	//m1[4] = 444;
//	m1.insert(pair<int, int>(3, 30));
//
//	//��������
//	map<int, int> m2(m1);
//
//	//��ֵ
//	map<int, int> m3 = m1;
//	
//	//���
//	printMap(m1);
//	printMap(m2);
//	printMap(m3);
//}
//
////II.���ֲ��뷽ʽ��ɾ����ʽ
//void test02()
//{
//	map<int, int> m4;
//
//	//1.����
//	//ע��:
//	//ֻ�е����ֲ��ܸ��Ǿ�ֵ
//	//�����õ����ֲ��뷽ʽ������Ӧkey����Ӧ��value,
//	//�����keyֵ������,���õ����ַ�ʽ����valueʱ,�ᴴ��һ��valueΪ0�Ķ���.
//
//	//1.1.�й��о�
//	m4.insert(pair<int, int>(1, 111));
//
//	//1.2.����͵��
//	m4.insert(make_pair(2, 222));
//
//	//1.3.���Ը���(װ��)
//	m4.insert(map<int, int>::value_type(3, 333));
//
//	//1.4.��������,��������в���,����������key�ҵ�value
//	m4[4] = 444;
//
//	printMap(m4);
//
//	//2.ɾ��
//	//ע��:
//	//�ڶ���ɾ����ʽ�Ĳ���ʱkeyֵ
//
//	//2.1.�й��о�,ͨ��������ɾ��
//	m4.erase(m4.begin());
//	printMap(m4);
//
//	//2.2.����keyֵɾ��
//	m4.erase(2);
//	printMap(m4);
//
//	//2.3.��������ɾ��
//	m4.erase(m4.begin(), m4.end());
//	printMap(m4);
//	
//	//2.4.��ղ���
//	m4.clear();
//	printMap(m4);
//}
//
////III.������ͳ��
////����ԭ��:
////find(key);	  ����key�Ƿ����,���ظü���Ԫ�صĵ�����;��������,�򷵻�map.end();
////count(key);	  ͳ��key��Ԫ�ظ���.����map,���Ϊ0��1;����multimap�������.
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
//	//1.����
//	//ע��:
//	//find(key)����ֵ�Ǹü���ӦԪ�صĵ�����,δ�ҵ��򷵻�map.end()
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
//	//2.ͳ��
//
//	cout << m5.count(5) << endl;
//
//	cout << m5.count(3) << endl;
//}
//
////IV.����(Ĭ��Ϊ����(keyΪ�ڲ���������))
////ע��:
////��keyΪ�Զ�����������ʱ,��Ҫָ���������(��Ϸº���)
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
//	//ָ���������Ϊ
//	//������������;�ҵ�������ͬʱ,������ĸ����
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