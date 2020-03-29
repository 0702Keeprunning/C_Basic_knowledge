//#include <iostream>
//#include <string>
//using namespace std;
//
////函数重载
////可以让函数名相同，提高复用性
//
////函数重载的满足条件
////1、在同一个作用域下
////2、函数名相同
////3、函数的参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func的调用" << endl;
//}
////void func(int a)
////{
////	cout << "func(int a)的调用" << endl;
////}
//
/////函数重载的注意事项
////1、引用作为重载条件
//void func(int &a)
//{
//	cout << "func(int &a )的调用" << endl;
//}
//void func(const int &a)
//{
//	cout << "func(const int &a )的调用" << endl;
//}
////2、函数重载碰道默认参数  下面两个就会报错
//void func2(int a,int b=10)
//{
//	cout << "func2(int a,int b)的调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)的调用" << endl;
//}
//int main()
//{
//
//	int a = 10;
//	func(a);
//
//	func(10);
//
//	system("pause");
//	return 0;
//}