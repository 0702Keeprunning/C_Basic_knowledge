//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "有参构造函数" << endl;
//	}
//	person(const person &p)
//	{
//		cout << "拷贝构造函数" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "析构函数" << endl;
//	}
//
//	int m_age;
//};
//
////什么时候会调用拷贝构造函数
////1、使用一个已经创建完毕的对象来初始化一个新的对象
//void test01()
//{
//	person p1(20);  //调用了有参构造函数
//	person p2(p1);  //调用了拷贝构造函数
//	cout << "p2的年龄" << p2.m_age << endl;
//}
//
////2、值传递的方式给函数参数传值
//void dowork(person p)
//{
//
//}
//void test02()
//{
//	person p;
//	dowork(p);
//
//}
//
////3、值方式返回局部对象
//person dowork2()
//{
//	person p1;
//	return p1;
//}
//void test03()
//{
//	person p = dowork2();
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}