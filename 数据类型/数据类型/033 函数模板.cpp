//#include <iostream>
//using namespace std;
////函数模板
//template<typename T>  //声明一个模板，告诉编译器后面代码用到T不要报错 T是一个通用数据类型
//void myswap(T &a,T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	//1、自动类型推到
//	int a = 10;
//	int b = 20;
//	//myswap(a, b);
//	//2、显示指定类型
//	myswap<int>(a, b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//}
//
