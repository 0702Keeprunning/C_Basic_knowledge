//#include <iostream>
//#include <string>
//using namespace std;
//
////递增运算符重载
////自定义的整形变量
//class myinteger
//{
//	friend ostream &operator<<(ostream &cout, myinteger &myint);
//public:
//	myinteger()
//	{
//		mnum = 0;
//	}
//	//前置重载++运算符 返回引用是为了一直对一个数据进行++ 
//	myinteger& operator++()
//	{
//		mnum++;
//		return *this;
//	}
//	//后置重载++运算符
//	myinteger operator++(int) //int代表占位参数，可以用于区分前置后置重载函数
//	{
//		//先记录一下结果
//		myinteger temp = *this;
//		//再递增
//		mnum++;
//		//返回记录的结果
//		return temp;
//	}
//private:
//	int mnum;
//
//};
//
////利用全局函数重载左移运算符
//ostream &operator<<(ostream &cout, myinteger &myint)
//{
//	cout << myint.mnum;
//	return cout;
//}
//void test01()
//{
//	myinteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	myinteger myint;
//	//cout << myint ++ << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}