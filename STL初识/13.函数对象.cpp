//I.���
//1.���غ������ò��������࣬����󳣳�Ϊ��������
//2.��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�����º���

//II.���ʣ�
//��������(�º���)��һ���࣬����һ������

//III.���������ʹ�ã�
//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.�������������Ϊ��������

//#include<iostream>
//
//class MyAdd
//{
//public:
//
//	int operator()(int v1, int v2)
//	{
//
//		return v1 + v2;
//	}
//};
//
////2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//class MyPrint
//{
//public:
//
//	MyPrint()
//	{
//		this->count = 0;
//	}
//
//	void operator()(std::string str)
//	{
//		std::cout << str << std::endl;
//
//		this->count++; //��¼���õĴ���
//	}
//
//	int count; //�ڲ��Լ���״̬
//};
//
//void test01()
//{
//	std::cout << MyAdd()(6, 5) << std::endl;
//	std::cout << "\n";
//}
//
//void test02()
//{
//	MyPrint()("Shark");
//	MyPrint()("Minami");
//	MyPrint()("Dave");
//	MyPrint()("Power");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark");
//	MyPrint()("Shark"); //�������� �����������,����count��¼����0
//
//	std::cout << "�������������MyPrint()���õĴ���" << MyPrint().count << std::endl;
//	std::cout << "\n";
//	
//	MyPrint mp;
//	mp("a");
//	mp("b");
//	mp("c");
//	mp("d");
//	mp("e");
//	mp("f");
//	mp("g");
//	mp("h");
//
//	std::cout << "ʵ���������MyPrint()���õĴ���" << mp.count << std::endl;
//	std::cout << "\n";
//
//}
//
////3.�������������Ϊ��������
//void doPrint(MyPrint& mp, std::string str)
//{
//	mp(str);
//}
//
//void test03()
//{
//	MyPrint mp;
//
//	doPrint(mp, "Hello,dude!");
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