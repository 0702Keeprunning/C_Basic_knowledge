//#include <iostream>
//#include <string>
//using namespace std;
////�ֱ�������ͨд���Ͷ�̬д��ʵ�ּ�����
//
////��ͨд��
//class calculator
//{
//public:
//
//	int getresult(string oper)
//	{
//		if (oper == "+")
//		{
//			return mnum1 + mnum2;
//		}
//		else if (oper == "-")
//		{
//			return mnum1 - mnum2;
//		}
//		else if (oper == "*")
//		{
//			return mnum1 * mnum2;
//		}
//		//���Ҫ��չ���� ��Ҫ�޸�Դ��
//		//��ʵ�ʿ������ᳫ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//
//	}
//
//	int mnum1;
//	int mnum2;
//
//};
//
////���ö�̬
////����������
//class abstractca
//{
//public:
//
//	virtual int getresult()
//	{
//		return 0;
//	}
//
//	int mnum1;
//	int mnum2;
//};
//
////�ӷ���������
//class addca:public abstractca
//{
//	int getresult()
//	{
//		return mnum1 + mnum2;
//	}
//};
//
////������������
//class subca :public abstractca
//{
//	int getresult()
//	{
//		return mnum1 - mnum2;
//	}
//};
//
//
////�˷���������
//class mulca :public abstractca
//{
//	int getresult()
//	{
//		return mnum1 * mnum2;
//	}
//};
//
//
//void test01()
//{
//	calculator p;
//	p.mnum1 = 10;
//	p.mnum2 = 10;
//
//	cout << " + " << p.getresult("+") << endl;
//	cout << " - " << p.getresult("-") << endl;
//	cout << " * " << p.getresult("*") << endl;
//
//}
//
//void test02()
//{
//	//��̬ʹ������
//	//�����ָ�������ָ���Ӷ���
//
//	//�ӷ�����
//	abstractca *abc = new addca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " + " << abc->getresult() << endl;
//
//	delete abc;
//
//	//��������
//	abc = new subca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " - " << abc->getresult() << endl;
//
//	delete abc;
//
//	//�˷�����
//	abc = new mulca;
//	abc->mnum1 = 10;
//	abc->mnum2 = 10;
//	cout << " * " << abc->getresult() << endl;
//
//	delete abc;
//
//
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//} 