//1.queue(����) �������
//queue��һ���Ƚ��ȳ�(First In First Out,FIFO)�����ݽṹ��������������
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//����ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ ---��� push
//�����г����ݳ�Ϊ ---���� pop

//2.queue ���ýӿ�
//2.1.���캯����
//queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue &que); //�������캯��

//2.2.��ֵ������
//queue& operator=(const queue &que); //���صȺŲ�����

//2.3.���ݴ�ȡ��
//push(elem); //����β���Ԫ��
//pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back(); //�������һ��Ԫ��
//front(); //���ص�һ��Ԫ��

//2.4.��С������
//empty(); //�ж϶����Ƿ�Ϊ��
//size(); //���ض��еĴ�С

//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		this->name = name;
//
//		this->age = age;
//	}
//
//	string name;
//
//	int age;
//};
//
//queue<Person> que;
//
//void test01()
//{
//	Person p1("Sara", 19);
//	Person p2("Dave", 20);
//	Person p3("Minami", 19);
//	Person p4("Jose", 21);
//
//	que.push(p1);
//	que.push(p2);
//	que.push(p3);
//	que.push(p4);
//
//	cout << "The size of que: " << que.size() << endl;
//
//	while (!que.empty())
//	{
//		cout << "The front of que: " << "\tName: " << que.front().name << "\tAge: " << que.front().age << endl;
//		cout << "The back of que: " << "\tName: " << que.back().name << "\tAge: " << que.back().age << endl;
//
//		que.pop();
//	}
//
//	cout << "The size of que: " << que.size() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}