//��������:
//��˾������Ƹ��10��Ա��(ABCDEFGHIJ),10��Ա�����빫˾��,��Ҫָ��Ա�����ĸ����Ź���
//Ա����Ϣ��:���� �������;���ŷֱ�Ϊ:�߻� ���� �з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
//�ֲ�����ʾԱ����Ϣ

//ʵ�ֲ���:
//1.����10��Ա��,����vector��
//2.����vector����,ȡ��ÿ��Ա��,�����������
//3.�����,��Ա�����ű����Ϊkey,����Ա����Ϊvalue,���뵽multimap��
//4.�ֲ�����ʾԱ����Ϣ

//#include<iostream>
//#include<vector>
//#include<map>
//
//class Worker
//{
//public:
//
//	Worker(std::string name, int wages)
//	{
//		this->name = name;
//
//		this->wages = wages;
//
//		this->d_id = 0;
//	}
//
//	std::string name;
//
//	int wages;
//
//	int d_id;
//
//	std::string depart;
//};
//
////����ʮ��Ա����������vector����
//void creatWorkers(std::vector<Worker>& vW)
//{
//	std::string name = "Ա��";
//
//	std::string name_seed = "ABCDEFGHIJ";
//
//	for (int i = 0; i < 10; ++i)
//	{
//		int wages_seed = std::rand() % 8001 + 7000; //7000 ~ 15000
//
//		Worker w(name + name_seed[i], wages_seed);
//
//		vW.push_back(w);
//	}
//}
//
////��Ӧ���ŵı��
//void departId(std::vector<Worker>::iterator& it)
//{
//	if (it->depart == "PLANNER")
//	{
//		it->d_id = 10001;
//	}
//	else if (it->depart == "R&D")
//	{
//		it->d_id = 10002;
//	}
//	else
//	{
//		it->d_id = 10003;
//	}
//}
//
////����vector������ȡ��Ա�������������
//void regrouping(std::vector<Worker>& vW)
//{
//	std::string depart_seed[3] = {"PLANNER", "ARTIST", "R&D"}; //�߻� ���� �з�
//
//	for (std::vector<Worker>::iterator it = vW.begin(); it != vW.end(); ++it)
//	{
//		int i = std::rand() % 3 + 0; //0 ~ 2
//
//		it->depart = depart_seed[i];
//	}
//}
//
////��d_idΪkey��Woker��Ϊֵ ����multimap����
//void creatMap(std::vector<Worker>& vW, std::multimap<int, Worker>& mW)
//{
//	for (std::vector<Worker>::iterator it = vW.begin(); it != vW.end(); ++it)
//	{
//		departId(it);
//
//		mW.insert(std::make_pair(it->d_id, *it));
//	}
//
//	
//}
//
////�ֲ�����ʾԱ����Ϣ
//void showWorker(std::multimap<int, Worker>& mW)
//{
//	for (std::multimap<int, Worker>::iterator it = mW.begin(); it != mW.end(); ++it)
//	{
//		std::cout << "depart_id: " << it->first
//			<< "\tworker_name: " << it->second.name
//			<< "\tworker_depart: " << it->second.depart
//			<< "\tworker_wages: " << it->second.wages << std::endl;
//	}
//}
//
//int main()
//{
//	std::srand((unsigned)time(NULL));
//
//	std::vector<Worker> vW;
//	std::multimap<int, Worker> mW;
//
//	creatWorkers(vW);
//
//	regrouping(vW);
//
//	creatMap(vW, mW);
//
//	showWorker(mW);
//}