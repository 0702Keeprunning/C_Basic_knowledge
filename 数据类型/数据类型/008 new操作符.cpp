//#include <iostream>
//#include <string>
//using namespace std;
//
////new�Ļ����﷨
//int *func()
//{
//	//�ڶ�������һ����������
//	//���ص��Ǹ��������͵�ָ��
//	int *p = new int(10);
//	return p;
//}
//void test01()
//{
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//���������ɳ���Ա���������ͷ� ��delet
//	delete p;
//	//cout << *p << endl;  //�ڴ��Ѿ��ͷţ��ٴη��ʻᱨ��
//
//}
//
////�ڶ���new����һ������
//void test02()
//{
//	//�ڶ�����������
//	int *arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//		cout << arr[i] << endl;
//	}
//	//�ͷŶ�������  ע���ͷ�����Ҫ��������
//	delete[] arr;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}