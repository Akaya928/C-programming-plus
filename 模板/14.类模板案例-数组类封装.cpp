//����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//1.���Զ��������������Լ��Զ����������͵����ݽ��д洢
//2.�������е����ݴ洢������
//3.���캯���п��Դ������������
//4.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//5.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//6.����ͨ���±�ķ�ʽ���������е�Ԫ��
//7.���Ի�ȡ�����е�ǰԪ�ظ��������������

//�ڲ���test01 �� test02ʱ ����ͬʱ���� ����ִ�ӡ����

//#include"14.MyArray.hpp"
//
//void printIntArray(MyArray<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test01()
//{
//	MyArray<int> arr1(5);
//
//	for (int i = 0; i < 5; ++i)
//	{
//		//����β�巨�������в�������
//		arr1.pushBack(i);
//	}
//
//	cout << "arr1: " << endl;
//	printIntArray(arr1);
//	cout << "arr1������" << arr1.getCapacity() << endl
//		<< "arr1��С��" << arr1.getSize() << endl;
//
//	MyArray<int> arr2(arr1);
//
//	cout << "βɾǰarr2��" << endl;
//	printIntArray(arr2);
//	cout << "arr2������" << arr2.getCapacity() << endl
//		<< "arr2��С��" << arr2.getSize() << endl;
//
//	//����βɾ��ɾ�������е�����
//	arr2.popBack();
//
//	cout << "βɾ��arr2��" << endl;
//	printIntArray(arr2);
//	cout << "arr2������" << arr2.getCapacity() << endl
//		<< "arr2��С��" << arr2.getSize() << endl;
//}
//
////�����Զ�����������
//class Person
//{
//public:
//
//	Person() {};
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	int age = 0;
//	string name;
//};
//
//void printPersonArray(MyArray<Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); ++i)
//	{
//		cout << "name: " << arr[i].name << " age: " << arr[i].age << endl;
//	}
//}
//
//void test02()
//{
//	MyArray<Person> arr3(10);
//
//	Person p1("Sara", 19);
//	Person p2("Dave", 20);
//	Person p3("Jose", 21);
//	Person p4("Linda", 18);
//	Person p5("Tom", 24);
//
//	//�����ݴ��뵽������
//	arr3.pushBack(p1);
//	arr3.pushBack(p2);
//	arr3.pushBack(p3);
//	arr3.pushBack(p4);
//	arr3.pushBack(p5);
//
//	//��ӡ���� �� ��������ʹ�С
//	cout << "arr3: " << endl;
//	printPersonArray(arr3);
//	cout << "arr3������" << arr3.getCapacity() << endl
//		<< "arr3��С��" << arr3.getSize() << endl;
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}