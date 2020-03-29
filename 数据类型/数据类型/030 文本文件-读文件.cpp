//#include <iostream>
//#include <string>
//#include <fstream>  //文件
//using namespace std;
//
////文本文件  读文件
//void test01()
//{
//	//1、包含头文件
//	//2、创建流对象
//	ifstream ifs;
//	//3、指定打开方式 并判断是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//	//4、读数据
//	//第一种
//	//char buff[1024] = { 0 };
//	//while ( ifs>>buff )
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//第二种
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buff,sizeof(buff)))
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//第三种
//	string buff;
//	while (getline(ifs, buff))
//	{
//		cout << buff << endl;
//	}
//
//
//	//5、关闭文件
//	ifs.close();
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}