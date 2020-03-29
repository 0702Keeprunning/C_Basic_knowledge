//#include <iostream>
//#include <string>
//using namespace std;
////深拷贝与浅拷贝
////浅拷贝带来的问题是 如果建立了堆区的变量  堆区内存会重复释放 这时候就要用深拷贝来解决
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "有参构造函数" << endl;
//	}
//	//自己实现一个拷贝构造函数来解决浅拷贝带来的问题
//	//深拷贝
//	person(const person &p)
//	{
//		cout << "拷贝构造函数" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;  浅拷贝时编译器默认实现这行代码 在析构时会重复释放导致错误
//		m_height = new int(*p.m_height);  //在堆区重新分配一个空间来存储height
//	}
//	~person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		
//		cout << "析构函数" << endl;
//	}
//
//	int m_age;
//	int *m_height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "p1年龄：" << p1.m_age << "p1身高：" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2年龄：" << p2.m_age << "p2身高：" << *p2.m_height <<  endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}