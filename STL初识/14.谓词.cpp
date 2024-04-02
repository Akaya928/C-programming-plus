//概念：
//返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，那么为一元谓词
//如果operator()接收两个参数，那么为二元谓词

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
////一元谓词
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
//	std::vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive()); //GreatFive() 为匿名对象
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
////二元谓词
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
//	std::cout << "默认排序：" << std::endl;
//	//范围for循环
//	for (auto& val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	sort(v.begin(), v.end(), MyCompare()); //MyCompare() 为匿名对象
//	
//	std::cout << "\n降序排列：" << std::endl;
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