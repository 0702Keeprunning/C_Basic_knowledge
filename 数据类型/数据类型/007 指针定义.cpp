//#include <iostream>
//#include <string>
//using namespace std;
//
//void swap01(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//}
//
//void swap01(int *p3, int *p4)
//{
//	int temp = *p3;
//	*p3 = *p4;
//	*p4 = temp;
//
//	cout << "*p3=" << *p3 << endl;
//	cout << "*p4=" << *p4 << endl;
//
//}
//
//int main()
//{
//	//����ָ��
//	int a = 10;
//	//ָ�붨����﷨���������� * ָ�������
//	int *p;
//	//ָ���¼����a�ĵ�ַ
//	p = &a;
//
//	//ʹ��ָ��
//	//*p���������
//	*p = 1000;
//
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//
//
//	//ָ�������
//	//����ָ�������������е�Ԫ��
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int *p2 = arr;//arr����������׵�ַ ����&�������
//
//	cout << "����ָ����ʵ�һ��Ԫ��" << *p2 << endl;
//
//	p2++;
//
//	cout << "����ָ����ʵڶ���Ԫ��" << *p2 << endl;
//
//
//	//ֵ����
//	int num1 = 10;
//	int num2 = 20;
//	swap01(num1, num2);
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	//��ַ����
//	swap01(&num1, &num2);
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	system("pause");
//	return 0;
//}