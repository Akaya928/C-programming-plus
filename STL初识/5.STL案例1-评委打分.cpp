//案例描述：
//有5名选手，10个评委分别对每名选手打分，去除最高分和最低分，取平均分

//实现步骤：
//1.创建5名选手 可存放在vector中
//2.对5名选手进行打分 可存放在deque中
//3.sort算法对分数进行排序，然后去除最高分和最低分，取平均分

//精简版：(只是练手，无参考价值) 详解 移步到 代码逻辑增强版
//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
//
//void valueScore(vector<int> &v)
//{
//	int score = 0;
//	deque<int> d(10);
//	for (auto vIt = v.begin(); vIt != v.end(); ++vIt)
//	{
//		deque<int>::iterator it = d.begin();
//		while (it != d.end())
//		{
//			cin >> score;
//			*it = score;
//			++it;
//		}
//
//		sort(d.begin(), d.end());
//
//		int sum = 0;
//
//		for (auto it = d.begin() + 1; it != d.end() - 1; ++it)
//		{
//			sum += *it;
//		}
//
//		*vIt = sum / (d.size() - 2);
//	}
//	
//}
//
//void printScore(int score)
//{
//	cout << score << endl;
//}
//
//void xuanShou()
//{
//	vector<int> v(5);
//	
//	valueScore(v);
//
//	for_each(v.begin(), v.end(), printScore);
//}
//
//int main()
//{
//	xuanShou();
//
//	return 0;
//}


//代码逻辑增强版：
//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
//
////创建选手类
//class Person
//{
//public:
//
//	Person(string name, int score)
//	{
//		this->name = name;
//		this->score = score;
//	}
//
//	string name; //选手姓名
//
//	int score; //平均分
//};
//
////创建5名选手 存放在vector中
//void setPerson(vector<Person> &v)
//{
//	
//	string nameSeed = "ABCDE";
//
//	for (int i = 0; i < 5; ++i)
//	{
//		string name = "选手";
//		Person p(name + nameSeed[i], 0);
//		v.push_back(p);
//	}
//}
//
////10位评委给5名选手打分 评分存放在deque中 并求平均分
//void setScore(vector<Person>& v)
//{
//	cout << "真实打分：" << endl;
//	for (vector<Person>::iterator vIt = v.begin(); vIt != v.end(); ++vIt)
//	{
//		cout << vIt->name << " ";
//		//10个评委打分
//		deque<int> d(10);
//		for (deque<int>::iterator dIt = d.begin(); dIt != d.end(); ++dIt)
//		{
//			int score = rand() % 41 + 60; //60~100 这里只是伪随机 之后还要在main函数中加上随机数种子
//
//			*dIt = score;
//			
//			cout << *dIt << " ";
//		}
//		cout << endl;
//
//		//利用排序算法 sort 升序
//		sort(d.begin(), d.end());
//
//		//去掉最高分和最低分
//		d.pop_front();
//		d.pop_back();
//		
//		//遍历deque 求平均分
//		//这里用到的遍历方式是范围for循环 但需注意使用范围for循环时不要有修改容器的操作 详见C++Primer
//		int sum = 0;
//		for (auto it = d.begin(); it != d.end(); ++it)
//		{
//			sum += *it;
//		}
//
//		//给选手赋分
//		vIt->score = sum / d.size(); //vIt->score === (*vIt).score 详见C++Primer C++11 标准
//
//		d.clear(); //清空deque的大小
//	}
//}
//
//void showScore(vector<Person> &v)
//{
//	cout << "\n折算后：" << endl;
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << it->name << " "
//			<< it->score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//
//	vector<Person> v;
//
//	setPerson(v);
//
//	setScore(v);
//
//	showScore(v);
//
//	return 0;
//}