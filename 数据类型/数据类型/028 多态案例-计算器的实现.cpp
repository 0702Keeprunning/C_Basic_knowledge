//#include <iostream>
//#include <string>
//using namespace std;
////分别利用普通写法和多态写法实现计算器
//
////普通写法
//class calculator
//{
//public:
//
//	int getresult(string oper)
//	{
//		if (oper == "+")
//		{
//			return mnum1 + mnum2;
//		}
//		else if (oper == "-")
//		{
//			return mnum1 - mnum2;
//		}
//		else if (oper == "*")
//		{
//			return mnum1 * mnum2;
//		}
//		//如果要扩展功能 需要修改源码
//		//在实际开发中提倡开闭原则
//		//开闭原则：对扩展进行开放，对修改进行关闭
//
//	}
//
//	int mnum1;
//	int mnum2;
//
//};
//
////利用多态
////计算器基类
//class abstractca
//{
//public:
//
//	virtual int getresult()
//	{
//		return 0;
//	}
//
//	int mnum1;
//	int mnum2;
//};
//
////加法计算器类
//class addca:public abstractca
//{
//	int getresult()
//	{
//		return mnum1 + mnum2;
//	}
//};
//
////减法计算器类
//class subca :public abstractca
//{
//	int getresult()
//	{
//		return mnum1 - mnum2;
//	}
//};
//
//
////乘法计算器类
//class mulca :public abstractca
//{
//	int getresult()
//	{
//		return mnum1 * mnum2;
//	}
//};
//
//
//void test01()
//{
//	calculator p;
//	p.mnum1 = 10;
//	p.mnum2 = 10;
//
//	cout << " + " << p.getresult("+") << endl;
//	cout << " - " << p.getresult("-") << endl;
//	cout << " * " << p.getresult("*") << endl;
//
//}
//
//void test02()
//{
//	//多态使用条件
//	//父类的指针或引用指向子对象
//
//	//加法运算
//	abstractca *abc = new addca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " + " << abc->getresult() << endl;
//
//	delete abc;
//
//	//减法运算
//	abc = new subca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " - " << abc->getresult() << endl;
//
//	delete abc;
//
//	//乘法运算
//	abc = new mulca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " * " << abc->getresult() << endl;
//
//	delete abc;
//
//
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//} 