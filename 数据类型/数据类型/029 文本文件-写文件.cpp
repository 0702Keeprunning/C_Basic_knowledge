//#include <iostream>
//#include <string>
//#include <fstream>  //文件
//using namespace std;
//

//
//| 打开方式 | 解释                       |
//| ---------- - | -------------------------- |
//| ios::in | 为读文件而打开文件         |
//| ios::out | 为写文件而打开文件         |
//| ios::ate | 初始位置：文件尾           |
//| ios::app | 追加方式写文件             |
//| ios::trunc | 如果文件存在先删除，再创建 |
//| ios::binary | 二进制方式 |
////文本文件  写文件
//void test01()
//{
//	//1、包含头文件
//	//2、创建流对象
//	ofstream ofs;
//	//3、指定打开方式
//	ofs.open("test.txt", ios::out);
//	//4、写内容
//	ofs << "abcdfefg" << endl;
//	ofs << "12345656" << endl;
//	ofs << "/*-+**/*" << endl;
//	//5、关闭文件
//	ofs.close();
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}