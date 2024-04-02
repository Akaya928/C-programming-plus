//案例描述：实现一个通用的数组类，要求如下：
//1.可以对内置数据类型以及自定义数据类型的数据进行存储
//2.将数组中的数据存储到堆区
//3.构造函数中可以传入数组的容量
//4.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//5.提供尾插法和尾删法对数组中的数据进行增加和删除
//6.可以通过下标的方式访问数组中的元素
//7.可以获取数组中当前元素个数和数组的容量

//在测试test01 与 test02时 请勿同时测试 会出现打印错误

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
//		//利用尾插法向数组中插入数据
//		arr1.pushBack(i);
//	}
//
//	cout << "arr1: " << endl;
//	printIntArray(arr1);
//	cout << "arr1容量：" << arr1.getCapacity() << endl
//		<< "arr1大小：" << arr1.getSize() << endl;
//
//	MyArray<int> arr2(arr1);
//
//	cout << "尾删前arr2：" << endl;
//	printIntArray(arr2);
//	cout << "arr2容量：" << arr2.getCapacity() << endl
//		<< "arr2大小：" << arr2.getSize() << endl;
//
//	//利用尾删法删除数组中的数据
//	arr2.popBack();
//
//	cout << "尾删后arr2：" << endl;
//	printIntArray(arr2);
//	cout << "arr2容量：" << arr2.getCapacity() << endl
//		<< "arr2大小：" << arr2.getSize() << endl;
//}
//
////测试自定义数据类型
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
//	//将数据传入到数组中
//	arr3.pushBack(p1);
//	arr3.pushBack(p2);
//	arr3.pushBack(p3);
//	arr3.pushBack(p4);
//	arr3.pushBack(p5);
//
//	//打印数组 并 输出容量和大小
//	cout << "arr3: " << endl;
//	printPersonArray(arr3);
//	cout << "arr3容量：" << arr3.getCapacity() << endl
//		<< "arr3大小：" << arr3.getSize() << endl;
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