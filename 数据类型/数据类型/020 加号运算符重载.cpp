//#include <iostream>
//#include <string>
//using namespace std;
////加号运算符重载
//class person
//{
//public:
//	//1、成员函数重载
//	//person operator+(person &p)
//	//{
//	//	person temp;
//	//	temp.ma = this->ma + p.ma;
//	//	temp.mb = this->mb + p.mb;
//
//	//	return temp;
//	//}
//	int ma;
//	int mb;
//
//};
////2、全局函数重载
//person operator+(person &p1, person &p2)
//{
//	person temp;
//	temp.ma = p1.ma + p2.ma;
//	temp.mb = p1.mb + p2.mb;
//	return temp;
//}
//void test01()
//{
//	person p1;
//	p1.ma = 10;
//	p1.mb = 20;
//	person p2;
//	p2.ma = 10;
//	p2.mb = 20;
//
//	person p3 = p1 + p2;
//
//	cout << "p3.ma=" << p3.ma << endl;
//	cout << "p3.mb=" << p3.mb << endl;
//
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}