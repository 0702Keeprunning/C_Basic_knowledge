//#include <iostream>
//#include <string>
//using namespace std;
//
////�������������
////�Զ�������α���
//class myinteger
//{
//	friend ostream &operator<<(ostream &cout, myinteger &myint);
//public:
//	myinteger()
//	{
//		mnum = 0;
//	}
//	//ǰ������++����� ����������Ϊ��һֱ��һ�����ݽ���++ 
//	myinteger& operator++()
//	{
//		mnum++;
//		return *this;
//	}
//	//��������++�����
//	myinteger operator++(int) //int����ռλ������������������ǰ�ú������غ���
//	{
//		//�ȼ�¼һ�½��
//		myinteger temp = *this;
//		//�ٵ���
//		mnum++;
//		//���ؼ�¼�Ľ��
//		return temp;
//	}
//private:
//	int mnum;
//
//};
//
////����ȫ�ֺ����������������
//ostream &operator<<(ostream &cout, myinteger &myint)
//{
//	cout << myint.mnum;
//	return cout;
//}
//void test01()
//{
//	myinteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	myinteger myint;
//	//cout << myint ++ << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}