//#include <iostream>
//#include <string>
//using namespace std;
//
//void swap01(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//}
//
//void swap01(int *p3, int *p4)
//{
//	int temp = *p3;
//	*p3 = *p4;
//	*p4 = temp;
//
//	cout << "*p3=" << *p3 << endl;
//	cout << "*p4=" << *p4 << endl;
//
//}
//
//int main()
//{
//	//定义指针
//	int a = 10;
//	//指针定义的语法：数据类型 * 指针变量名
//	int *p;
//	//指针记录变量a的地址
//	p = &a;
//
//	//使用指针
//	//*p代表解引用
//	*p = 1000;
//
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//
//
//	//指针和数组
//	//利用指针来访问数组中的元素
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int *p2 = arr;//arr就是数组的首地址 不用&这个符号
//
//	cout << "利用指针访问第一个元素" << *p2 << endl;
//
//	p2++;
//
//	cout << "利用指针访问第二个元素" << *p2 << endl;
//
//
//	//值传递
//	int num1 = 10;
//	int num2 = 20;
//	swap01(num1, num2);
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	//地址传递
//	swap01(&num1, &num2);
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	system("pause");
//	return 0;
//}