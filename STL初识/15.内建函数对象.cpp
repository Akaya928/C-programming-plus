//���
//STL�ڽ���һЩ��������

//���ࣺ
//�����º���
//��ϵ�º���
//�߼��º���

//�÷���
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>

//#include<iostream>
//#include<functional>
//#include<vector>
//#include<algorithm>
//
////�����º��� ���ܣ�
////ʵ����������
////����negate��һԪ���㣬�������Ƕ�Ԫ����
//
////ʾ����negate ȡ�� һԪ���㣻 plus �ӷ� ��Ԫ����
//void test01()
//{
//	std::negate<int> n;
//
//	std::cout << 19 << "ȡ����Ϊ: " << n(19) << std::endl;
//
//	std::plus<int> p;
//
//	std::cout << "19 + 20 = " << p(19, 20) << std::endl;
//}
//
////��ϵ�º��� ���ܣ�
////ʵ�ֹ�ϵ�Ա� >, >=, ==, <=, <
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
//	std::cout << "����ǰ��" << std::endl;
//	for (auto& val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	//���� ���ù�ϵ�º���
//	sort(v.begin(), v.end(), std::greater<int>());
//
//	std::cout <<  "\n�����" << std::endl;
//	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		std::cout << *it << " ";
//	}
//}
//
////�߼��º��� ���ܣ�
////ʵ���߼�����  �� �� ��
//void test03() //�߼��� logical_not
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
//	std::cout << "ִ���߼�������ǰ: " << std::endl;
//	for (auto val : v)
//	{
//		std::cout << val << " ";
//	}
//
//	std::vector<int> v2;
//	v2.resize(v.size());
//	std::transform(v.begin(), v.end(), v2.begin(), std::logical_not<bool>());
//
//	std::cout << "\nִ���߼��������: " << std::endl;
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