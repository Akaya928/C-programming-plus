//��ģ���뺯��ģ��������Ҫ������
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ������б��п�����Ĭ�ϲ���

//�ܽ᣺
//1.��ģ���ʹ��ֻ������ʾָ�����͵ķ�ʽ
//2����ģ���е�ģ������б������Ĭ�ϲ���

//#include<iostream>
//
//using namespace std;
//
//template<class TypeName, class TypeAge = int>
//class Person
//{
//public:
//
//	Person(TypeName name, TypeAge age)
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
//	TypeName name;
//
//	TypeAge age;
//};
//
//void test01()
//{
//	Person<string, int> p1("Sara", 19);
//	//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//	//Person p3("Joes", 20);  ���� ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//    //2.��ģ����ģ������б��п�����Ĭ�ϲ���
//	Person<string> p2("Dave", 19);
//
//	p1.showInfo();
//	p2.showInfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}