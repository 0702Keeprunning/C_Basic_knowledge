//#include <iostream>
//#include <string>
//#include <fstream>  //�ļ�
//using namespace std;
//
////�������ļ�  ���ļ�
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
//		cout << "�ļ���ʧ��" << endl;
//	}
//
//	person p;
//
//	ifs.read((char *) (&p), sizeof(person));
//
//	cout << "����: " << p.mname << " ���䣺" << p.mage << endl;
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