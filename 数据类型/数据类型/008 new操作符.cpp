//#include <iostream>
//#include <string>
//using namespace std;
//
////new的基本语法
//int *func()
//{
//	//在堆区创建一个整型数据
//	//返回的是该数据类型的指针
//	int *p = new int(10);
//	return p;
//}
//void test01()
//{
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区数据由程序员管理，若想释放 用delet
//	delete p;
//	//cout << *p << endl;  //内存已经释放，再次访问会报错
//
//}
//
////在堆区new开辟一个数组
//void test02()
//{
//	//在堆区创建数组
//	int *arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//		cout << arr[i] << endl;
//	}
//	//释放堆区数组  注意释放数组要加中括号
//	delete[] arr;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}