//string��char *����
//char *��һ��ָ��
//string��һ���࣬�ڲ���װ��char *����������ַ�������һ��char�͵�����

//string���캯��ԭ�ͣ�
//string();					����һ���յ��ַ��� ���磺string str; Ĭ�ϳ�ʼ��Ϊһ���մ�
//string(const char* s);    ʹ���ַ���s��ʼ��
//string(const string& s);  ʹ��һ��string�����ʼ����һ��string���� ������ʼ��
//string(int n, char c);    ʹ��n���ַ�c��ʼ��

//string �������õĳ�Ա���� string str
//str.find() �� str.rfind() ǰ���Ǵ������Ҳ� �����Ǵ�������� �����ַ���һ�γ��ֵ�λ��
//str.compare() �Ƚ�
//str.substr() ��ȡ
//str.erase() �� str.insert() ɾ�� �� ����
//str.at() ���� str[]  ע�Ⲣ����ÿ��������֧���±������[]
//str.replace() �滻
//str.append() ƴ��
//str.assign() ���� str =  ��ֵ

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