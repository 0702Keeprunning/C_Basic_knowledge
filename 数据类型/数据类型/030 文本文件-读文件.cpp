//#include <iostream>
//#include <string>
//#include <fstream>  //�ļ�
//using namespace std;
//
////�ı��ļ�  ���ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//	//2������������
//	ifstream ifs;
//	//3��ָ���򿪷�ʽ ���ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//	}
//	//4��������
//	//��һ��
//	//char buff[1024] = { 0 };
//	//while ( ifs>>buff )
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//�ڶ���
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buff,sizeof(buff)))
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//������
//	string buff;
//	while (getline(ifs, buff))
//	{
//		cout << buff << endl;
//	}
//
//
//	//5���ر��ļ�
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