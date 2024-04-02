//概念：
//STL内建了一些函数对象

//分类：
//算数仿函数
//关系仿函数
//逻辑仿函数

//用法：
//这些仿函数所产生的对象，用法和一般函数完全相同
//使用内建函数对象，需要引入头文件 #include<functional>

//#include<iostream>
//#include<functional>
//#include<vector>
//#include<algorithm>
//
////算数仿函数 功能：
////实现四则运算
////其中negate是一元运算，其他都是二元运算
//
////示例：negate 取反 一元运算； plus 加法 二元运算
//void test01()
//{
//	std::negate<int> n;
//
//	std::cout << 19 << "取反后为: " << n(19) << std::endl;
//
//	std::plus<int> p;
//
//	std::cout << "19 + 20 = " << p(19, 20) << std::endl;
//}
//
////关系仿函数 功能：
////实现关系对比 >, >=, ==, <=, <
//void test02()
//{
//	std::vector<int> v;
//
//	v.push_back(110);
//	v.push_back(90);
//	v.push_back(20);
//	v.push_back(60);
//	v.push_back(50);
//	v.push_back(200);
//
//	std::cout << "排序前：" << std::endl;
//	for (auto& val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	//降序 利用关系仿函数
//	sort(v.begin(), v.end(), std::greater<int>());
//
//	std::cout <<  "\n排序后：" << std::endl;
//	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		std::cout << *it << " ";
//	}
//}
//
////逻辑仿函数 功能：
////实现逻辑运算  或 与 非
//void test03() //逻辑非 logical_not
//{
//	std::vector<bool> v;
//
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	std::cout << "执行逻辑非运算前: " << std::endl;
//	for (auto val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	std::vector<int> v2;
//	v2.resize(v.size());
//	std::transform(v.begin(), v.end(), v2.begin(), std::logical_not<bool>());
//
//	std::cout << "\n执行逻辑非运算后: " << std::endl;
//	for (auto val : v2)
//	{
//		std::cout << val << " ";
//	}
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