//#include <iostream>
//#include <string>
//using namespace std;
////成员函数做友元
//class building;
//
//class goodgay
//{
//public:
//	goodgay();
//	void visit();//参观函数可以访问building中的私有属性
//	void visit2();//参观函数不可以访问building中私有的属性
//	building *build;
//
//};
//
//class building
//{
//	//goodgay下的visit是building的友元 可访问building内的私有成员
//	friend void goodgay::visit();
//public:
//	building();
//
//
//	string sitting;
//private:
//	string bedroom;
//
//};
////类外写成员函数
//building::building()
//{
//	sitting = "客厅";
//	bedroom = "卧室";
//
//}
//
//
//goodgay::goodgay()
//{
//	//创建建筑物对象
//	build = new building;
//}
//void goodgay::visit()
//{
//	cout << "goodgay正在访问" << build->sitting << endl;
//	cout << "goodgay正在访问" << build->bedroom << endl;
//}
//void goodgay::visit2()
//{
//	cout << "goodgay2正在访问" << build->sitting << endl;
//}
//
//
//void test01()
//{
//	goodgay g;
//	g.visit();
//	g.visit2();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}