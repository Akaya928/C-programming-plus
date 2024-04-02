//案例描述
//1.利用函数模板封装一个排序的函数，可以对不同数据类型进行排序
//2.排序规则从大到小，排序算法为选择排序
//3.分别用 char 数组和 int 数组进行测试

//#include<iostream>
//
//using namespace std;
//
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void sortArray(T arr[], int len)
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		T max = i;
//		for (int j = i + 1; j < len; ++j)
//		{
//			if (arr[max] < arr[j])
//				max = j;
//		}
//
//		if (max != i)
//		{
//			mySwap(arr[i], arr[max]);
//		}
//	}
//}
//
//template<typename T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; ++i)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	int intArr[] = {12, 34, 234, 23, 345, 567, 45, 37};
//	int num = sizeof(intArr) / sizeof(int);
//
//	sortArray(intArr, num);
//	printArray(intArr, num);
//}
//
//void test02()
//{
//	char charArr[] = { 'd', 'j', 'q', 'a', 'z', 't', 'A', 'Q' };
//	int num = sizeof(charArr) / sizeof(char);
//
//	sortArray<char>(charArr, num);
//	printArray<char>(charArr, num);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}