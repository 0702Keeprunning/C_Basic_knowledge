//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//利用冒泡排序实现升序
//	int arr[] = { 4,2,8,6,5,7,1,3,9 };
//	cout << "排序前的结果" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	//开始冒泡排序
//	//总共排序的轮数为 数组中元素总个数-1
//	for (int i = 0; i < 9 - 1; i++)
//	{
//		//内层循环对比 次数 = 元素总个数 - 当前轮数 - 1
//		for (int j = 0; j < 9 - i - 1; j++)
//		{
//			//如果第一个数比第二个大 就交换
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//		}
//	}
//	//排序后结果
//	cout << "排序后结果：" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}