//#include <iostream>
//#include <string>
//using namespace std;
////�����ǳ����
////ǳ���������������� ��������˶����ı���  �����ڴ���ظ��ͷ� ��ʱ���Ҫ����������
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "�вι��캯��" << endl;
//	}
//	//�Լ�ʵ��һ���������캯�������ǳ��������������
//	//���
//	person(const person &p)
//	{
//		cout << "�������캯��" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;  ǳ����ʱ������Ĭ��ʵ�����д��� ������ʱ���ظ��ͷŵ��´���
//		m_height = new int(*p.m_height);  //�ڶ������·���һ���ռ����洢height
//	}
//	~person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		
//		cout << "��������" << endl;
//	}
//
//	int m_age;
//	int *m_height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "p1���䣺" << p1.m_age << "p1��ߣ�" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2���䣺" << p2.m_age << "p2��ߣ�" << *p2.m_height <<  endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}