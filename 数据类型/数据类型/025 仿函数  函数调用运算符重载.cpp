//#include <iostream>
//#include <string>
//using namespace std;
////�����������������
//
//class myprint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test01()
//{
//	myprint p1;
//	p1("hello world");  //�º���
//
//
//}
////�º����ǳ���û�й̶���д��
////�ӷ���
//
//class myadd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test02()
//{
//	myadd p1;
//	int ret = p1(1,2);  //�º���
//	cout << "���Ϊ��" << ret << endl;
//
//	//�������غ�������
//	cout << myadd()(100, 100) << endl;
//
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}