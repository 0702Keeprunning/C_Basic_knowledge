//#include <iostream>
//#include <string>
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "�вι��캯��" << endl;
//	}
//	person(const person &p)
//	{
//		cout << "�������캯��" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "��������" << endl;
//	}
//
//	int m_age;
//};
//
////ʲôʱ�����ÿ������캯��
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
//void test01()
//{
//	person p1(20);  //�������вι��캯��
//	person p2(p1);  //�����˿������캯��
//	cout << "p2������" << p2.m_age << endl;
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void dowork(person p)
//{
//
//}
//void test02()
//{
//	person p;
//	dowork(p);
//
//}
//
////3��ֵ��ʽ���ؾֲ�����
//person dowork2()
//{
//	person p1;
//	return p1;
//}
//void test03()
//{
//	person p = dowork2();
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}