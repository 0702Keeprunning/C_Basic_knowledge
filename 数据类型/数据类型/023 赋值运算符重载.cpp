//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//public:
//	person(int age)
//	{
//		mage = new int(age);
//	}
//	~person()
//	{
//		if (mage != NULL)
//		{
//			delete mage;
//			mage = NULL;
//		}
//	}
//
//	//���ظ�ֵ�����
//	person& operator=(person &p)
//	{
//		//���ж��Ƿ��������ڶ�������������ͷŸɾ�
//		if (mage != NULL)
//		{
//			delete mage;
//			mage = NULL;
//		}
//		mage = new int(*p.mage);
//		return *this;
//	}
//	
//	int *mage; 
//
//};
//
//void test01()
//{
//	person p1(18);
//
//	person p2(20);
//
//	person p3(30);
//
//	p3 = p2 = p1; //��ֵ����
//
//	cout << "p1������Ϊ" << *p1.mage << endl;
//
//	cout << "p2������Ϊ" << *p2.mage << endl;
//
//	cout << "p3������Ϊ" << *p3.mage << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}