//#include <iostream>
//#include <string>
//#include <fstream>  //�ļ�
//using namespace std;
//
////�������ļ�  д�ļ�
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
//	person p = { "����", 18 };
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