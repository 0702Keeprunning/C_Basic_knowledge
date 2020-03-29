//#include <iostream>
//#include <string>
//#include <fstream>  //文件
//using namespace std;
//
////二进制文件  写文件
//
//class person
//{
//public :
//	char mname[64];
//	int mage;
//};
//
//void test01()
//{
//	ofstream ofs;
//
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	person p = { "张三", 18 };
//
//	ofs.write(((const char *)&p), sizeof(person));
//
//	ofs.close();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}