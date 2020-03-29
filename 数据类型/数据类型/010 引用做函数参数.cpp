//#include <iostream>
//#include <string>
//using namespace std;
//
////交换函数
////值传递
//void myswap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//
////地址传递
//void myswap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////引用传递
//void myswap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap01(a, b); //值传递时形参不会修饰实参
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	myswap02(&a, &b); //地址递时形参会修饰实参
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	myswap03(a, b); //引用递时形参会修饰实参
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}