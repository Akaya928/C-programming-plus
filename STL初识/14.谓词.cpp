//���
//����bool���͵ķº�����Ϊν��
//���operator()����һ����������ôΪһԪν��
//���operator()����������������ôΪ��Ԫν��

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
////һԪν��
//class GreatFive
//{
//public:
//
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//
//};
//
//void test01()
//{
//	std::vector<int> v;
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//
//	std::vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive()); //GreatFive() Ϊ��������
//
//	if (it != v.end())
//	{
//		std::cout << "Found: " << *it << std::endl;
//	}
//	else
//	{
//		std::cout << "Not found!" << std::endl;
//	}
//}
//
////��Ԫν��
//class MyCompare
//{
//public:
//
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//void test02()
//{
//	std::vector<int> v;
//
//	v.push_back(20);
//	v.push_back(110);
//	v.push_back(30);
//	v.push_back(60);
//	v.push_back(10);
//	v.push_back(70);
//	v.push_back(100);
//
//	sort(v.begin(), v.end());
//
//	std::cout << "Ĭ������" << std::endl;
//	//��Χforѭ��
//	for (auto& val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	sort(v.begin(), v.end(), MyCompare()); //MyCompare() Ϊ��������
//	
//	std::cout << "\n�������У�" << std::endl;
//	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		std::cout << *it << " ";
//	}
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