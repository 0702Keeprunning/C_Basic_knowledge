//#include <iostream>
//#include <string>
//using namespace std;
////��Ա��������Ԫ
//class building;
//
//class goodgay
//{
//public:
//	goodgay();
//	void visit();//�ιۺ������Է���building�е�˽������
//	void visit2();//�ιۺ��������Է���building��˽�е�����
//	building *build;
//
//};
//
//class building
//{
//	//goodgay�µ�visit��building����Ԫ �ɷ���building�ڵ�˽�г�Ա
//	friend void goodgay::visit();
//public:
//	building();
//
//
//	string sitting;
//private:
//	string bedroom;
//
//};
////����д��Ա����
//building::building()
//{
//	sitting = "����";
//	bedroom = "����";
//
//}
//
//
//goodgay::goodgay()
//{
//	//�������������
//	build = new building;
//}
//void goodgay::visit()
//{
//	cout << "goodgay���ڷ���" << build->sitting << endl;
//	cout << "goodgay���ڷ���" << build->bedroom << endl;
//}
//void goodgay::visit2()
//{
//	cout << "goodgay2���ڷ���" << build->sitting << endl;
//}
//
//
//void test01()
//{
//	goodgay g;
//	g.visit();
//	g.visit2();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}