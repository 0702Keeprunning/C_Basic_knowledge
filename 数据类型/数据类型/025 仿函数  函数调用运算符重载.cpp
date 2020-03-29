//#include <iostream>
//#include <string>
//using namespace std;
////函数调用运算符重载
//
//class myprint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test01()
//{
//	myprint p1;
//	p1("hello world");  //仿函数
//
//
//}
////仿函数非常灵活，没有固定的写法
////加法类
//
//class myadd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test02()
//{
//	myadd p1;
//	int ret = p1(1,2);  //仿函数
//	cout << "结果为：" << ret << endl;
//
//	//匿名重载函数对象
//	cout << myadd()(100, 100) << endl;
//
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}