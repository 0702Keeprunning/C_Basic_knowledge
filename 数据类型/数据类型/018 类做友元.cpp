//#include <iostream>
//#include <string>
//using namespace std;
////������Ԫ
//class building;
//
//class goodgay
//{
//public:
//	goodgay();
//	void visit();//�ιۺ�������building�е�����
//
//	building *build;
//
//};
//
//class building
//{
//	//goodgay��building����Ԫ �ɷ���building�ڵ�˽�г�Ա
//	friend class goodgay;
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
//
//
//void test01()
//{
//	goodgay g;
//	g.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}