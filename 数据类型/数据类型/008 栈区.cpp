//#include <iostream>
//#include <string>
//using namespace std;
////函数的形参和局部变量都存放在栈区
////栈区数据的注意事项--不要返回局部变量地址
////栈区的数据由编译器自己管理开辟和释放
//
//int  *func(int b)//形参b
//{
//	b = 100;//形参
//	int a = 10;//局部变量
//	return &a;//返回局部变量地址
//}
//
//int main()
//{
//	int *p = func(1);
//
//	cout << *p << endl;//第一次可以正常打印局部变量的值，因为编译器做了一次保留
//
//	cout << *p << endl;//第二次局部变量的数据就被释放了，所以不能正常显示
//
//	system("pause");
//	return 0;
//}