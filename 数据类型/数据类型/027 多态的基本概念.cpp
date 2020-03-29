//#include <iostream>
//#include <string>
//using namespace std;
//
////多态
//
////动态多态满足的条件
////1、有继承关系
////2、子类重写父类虚函数
//
//
////动态多态的使用
////父类的指针或者引用 执行子类的对象
//
//class animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class cat :public animal
//{
//	//重写  virtual关键字可写可不写  函数要完全相同才叫重写（函数名 参数）
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////地址早绑定 在编译阶段确定函数的地址
////在animal类中加个virtual，变成虚函数，现在属于晚绑定，传入的是哪个类的地址，执行哪个类的说话函数
//void dospeak(animal &an)
//{
//	an.speak();
//}
//void test01()
//{
//	cat p;
//	dospeak(p);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}