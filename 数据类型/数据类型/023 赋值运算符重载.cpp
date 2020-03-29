//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//public:
//	person(int age)
//	{
//		mage = new int(age);
//	}
//	~person()
//	{
//		if (mage != NULL)
//		{
//			delete mage;
//			mage = NULL;
//		}
//	}
//
//	//重载赋值运算符
//	person& operator=(person &p)
//	{
//		//先判断是否有属性在堆区，如果有先释放干净
//		if (mage != NULL)
//		{
//			delete mage;
//			mage = NULL;
//		}
//		mage = new int(*p.mage);
//		return *this;
//	}
//	
//	int *mage; 
//
//};
//
//void test01()
//{
//	person p1(18);
//
//	person p2(20);
//
//	person p3(30);
//
//	p3 = p2 = p1; //赋值操作
//
//	cout << "p1的年龄为" << *p1.mage << endl;
//
//	cout << "p2的年龄为" << *p2.mage << endl;
//
//	cout << "p3的年龄为" << *p3.mage << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}