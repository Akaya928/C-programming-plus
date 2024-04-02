//案例描述:
//公司今天招聘了10个员工(ABCDEFGHIJ),10名员工进入公司后,需要指派员工在哪个部门工作
//员工信息有:姓名 工资组成;部门分别为:策划 美术 研发
//随机给10名员工分配部门和工资
//通过multimap进行信息的插入 key(部门编号) value(员工)
//分部门显示员工信息

//实现步骤:
//1.创建10名员工,放入vector中
//2.遍历vector容器,取出每个员工,进行随机分组
//3.分组后,将员工部门编号作为key,具体员工作为value,放入到multimap中
//4.分部门显示员工信息

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
////创建十名员工，并放入vector容器
//void creatWorkers(std::vector<Worker>& vW)
//{
//	std::string name = "员工";
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
////对应部门的编号
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
////遍历vector容器，取出员工进行随机分组
//void regrouping(std::vector<Worker>& vW)
//{
//	std::string depart_seed[3] = {"PLANNER", "ARTIST", "R&D"}; //策划 美术 研发
//
//	for (std::vector<Worker>::iterator it = vW.begin(); it != vW.end(); ++it)
//	{
//		int i = std::rand() % 3 + 0; //0 ~ 2
//
//		it->depart = depart_seed[i];
//	}
//}
//
////以d_id为key，Woker类为值 放入multimap容器
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
////分部门显示员工信息
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