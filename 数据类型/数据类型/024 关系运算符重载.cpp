//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		mname = name;
//		mage = age;
//	}
//
//	//重载 == 号
//	bool operator==(person &p)
//	{
//		if (this->mname == p.mname && this->mage == p.mage)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string mname;
//	int mage;
//};
//
//void test01()
//{
//	person p1("张三",18);
//	person p2("张四",18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//
//
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}