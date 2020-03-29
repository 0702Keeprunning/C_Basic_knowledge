//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//引用的基本语法
//	//数据类型 &别名 = 原名
//	int a = 10;
//	//创建引用
//	int &b = a;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 100;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//引用的注意事项
//	//引用必须初始化
//	//int &d;需要初始化
//
//	//引用一旦初始化就不可以改变
//	int c = 20;
//
//	b = c;//赋值操作 而不是更改引用
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << b << endl;
//	system("pause");
//	return 0;
//}