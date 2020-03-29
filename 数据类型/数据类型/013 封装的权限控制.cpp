//#include <iostream>
//#include <string>
//using namespace std;
//
////访问权限
////1、公共权限     成员类内可以访问，类外可以访问
////2、保护权限     成员类内可以访问，类外不可以访问  子类可以访问父类中的保护内容
////3、私有权限     成员类内可以访问，类外不可以访问  子类不可以访问父类中的保护内容
//class person
//{
//public:
//	string  name;
//protected:
//	string car;
//private:
//	int password;
//public:
//	//类内可以访问
//	void func()
//	{
//		name = "zhuangsan"; 
//		car = "sas";
//		password = 123;
//	}
//};
//int main()
//{
//	//实例化对象
//	person p;
//	p.name = "asdas";  //类外可访问
//	system("pause");
//	return 0;
//}