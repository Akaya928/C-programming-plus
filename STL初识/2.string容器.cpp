//string与char *区别：
//char *是一个指针
//string是一个类，内部封装了char *，管理这个字符串，是一个char型的容器

//string构造函数原型：
//string();					创建一个空的字符串 例如：string str; 默认初始化为一个空串
//string(const char* s);    使用字符串s初始化
//string(const string& s);  使用一个string对象初始化另一个string对象 拷贝初始化
//string(int n, char c);    使用n个字符c初始化

//string 几个常用的成员函数 string str
//str.find() 与 str.rfind() 前者是从左往右查 后者是从右往左查 返回字符第一次出现的位置
//str.compare() 比较
//str.substr() 提取
//str.erase() 与 str.insert() 删除 和 插入
//str.at() 类似 str[]  注意并不是每个容器都支持下标运算符[]
//str.replace() 替换
//str.append() 拼接
//str.assign() 类似 str =  赋值

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test01()
//{
//	string str;
//
//	const char* s1 = "LiSA";
//	string s2(s1);
//
//	string s3(s2);
//
//	string s4(10, 'a');
//
//	cout << "s1: " << s1 << endl
//		<< "s2: " << s2 << endl
//		<< "s3: " << s3 << endl
//		<< "s4: " << s4 << endl;
//}
//
//void test02()
//{
//	string str{ "asdfefsedfg" };
//
//	size_t i = str.find("dfg");
//
//	cout << i << endl;
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