//����������
//��5��ѡ�֣�10����ί�ֱ��ÿ��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣�ȡƽ����

//ʵ�ֲ��裺
//1.����5��ѡ�� �ɴ����vector��
//2.��5��ѡ�ֽ��д�� �ɴ����deque��
//3.sort�㷨�Է�����������Ȼ��ȥ����߷ֺ���ͷ֣�ȡƽ����

//����棺(ֻ�����֣��޲ο���ֵ) ��� �Ʋ��� �����߼���ǿ��
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


//�����߼���ǿ�棺
//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
//
////����ѡ����
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
//	string name; //ѡ������
//
//	int score; //ƽ����
//};
//
////����5��ѡ�� �����vector��
//void setPerson(vector<Person> &v)
//{
//	
//	string nameSeed = "ABCDE";
//
//	for (int i = 0; i < 5; ++i)
//	{
//		string name = "ѡ��";
//		Person p(name + nameSeed[i], 0);
//		v.push_back(p);
//	}
//}
//
////10λ��ί��5��ѡ�ִ�� ���ִ����deque�� ����ƽ����
//void setScore(vector<Person>& v)
//{
//	cout << "��ʵ��֣�" << endl;
//	for (vector<Person>::iterator vIt = v.begin(); vIt != v.end(); ++vIt)
//	{
//		cout << vIt->name << " ";
//		//10����ί���
//		deque<int> d(10);
//		for (deque<int>::iterator dIt = d.begin(); dIt != d.end(); ++dIt)
//		{
//			int score = rand() % 41 + 60; //60~100 ����ֻ��α��� ֮��Ҫ��main�����м������������
//
//			*dIt = score;
//			
//			cout << *dIt << " ";
//		}
//		cout << endl;
//
//		//���������㷨 sort ����
//		sort(d.begin(), d.end());
//
//		//ȥ����߷ֺ���ͷ�
//		d.pop_front();
//		d.pop_back();
//		
//		//����deque ��ƽ����
//		//�����õ��ı�����ʽ�Ƿ�Χforѭ�� ����ע��ʹ�÷�Χforѭ��ʱ��Ҫ���޸������Ĳ��� ���C++Primer
//		int sum = 0;
//		for (auto it = d.begin(); it != d.end(); ++it)
//		{
//			sum += *it;
//		}
//
//		//��ѡ�ָ���
//		vIt->score = sum / d.size(); //vIt->score === (*vIt).score ���C++Primer C++11 ��׼
//
//		d.clear(); //���deque�Ĵ�С
//	}
//}
//
//void showScore(vector<Person> &v)
//{
//	cout << "\n�����" << endl;
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