//#include <iostream>
//#include <string>
//#include <fstream>  //文件
//using namespace std;
//
////二进制文件  读文件
//
//class person
//{
//public:
//	char mname[64];
//	int mage;
//};
//
//void test01()
//{
//	ifstream ifs;
//
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//
//	person p;
//
//	ifs.read((char *) (&p), sizeof(person));
//
//	cout << "姓名: " << p.mname << " 年龄：" << p.mage << endl;
//
//	ifs.close();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}