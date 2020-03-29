//#include <iostream>
//#include <string>
//using namespace std;
////全局函数做友元
////建筑类
//class building
//{
//	//全局函数是友元 可以访问building中的私有变量
//	friend void goodgay(building *p);
//
//public:
//	
//	building()
//	{
//		m_sitting = "客厅";
//		m_bedroom = "卧室";
//
//	}
//
//	string m_sitting;
//private:
//	string m_bedroom;
//};
//
////全局函数
//void goodgay(building *p)
//{
//	cout << "全局函数正在访问" << p->m_sitting << endl;
//
//	cout << "全局函数正在访问" << p->m_bedroom << endl;
//}
//
//void test01()
//{
//	building build;
//	goodgay(&build);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}