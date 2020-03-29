//#include <iostream>
//#include <string>
//using namespace std;
////引用做函数的返回值
////不要返回局部变量的引用
//int& test01()
//{
//	int a = 10; //局部变量 存放在栈区
//	return a;
//
//}
//
////函数的调用可以左值
//int& test02()
//{
//	static int a = 10; //局部变量 存放在栈区
//	return a;
//
//}
//
//int main()
//{
//	int &ref = test01();
//
//	cout << "ref=" << ref << endl;
//
//
//	int &ref2 = test02();
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	test02()=1000;  //左值
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	system("pause");
//	return 0;
//}