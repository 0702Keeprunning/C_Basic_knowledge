//#include <iostream>
//#include <string>
//using namespace std;
////�����������ķ���ֵ
////��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10; //�ֲ����� �����ջ��
//	return a;
//
//}
//
////�����ĵ��ÿ�����ֵ
//int& test02()
//{
//	static int a = 10; //�ֲ����� �����ջ��
//	return a;
//
//}
//
//int main()
//{
//	int &ref = test01();
//
//	cout << "ref=" << ref << endl;
//
//
//	int &ref2 = test02();
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	test02()=1000;  //��ֵ
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	system("pause");
//	return 0;
//}