//#include<iostream>
//using namespace std;
//
//void Print(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	for (int i = 0; i < nlen; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void InsertSort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 2)return;
//	//分成有序部分和无序部分
//	int Sorted = 1;//长度为1 有序
//	int i;//无序部分
//	int num;//标记数据
//	//循环n-1趟
//	for (i = 1; i < nlen; i++)
//	{
//		//获取要插入的无序数据
//		num = arr[i];
//		//遍历有序部分
//		for (int j = Sorted-1; j >-1; j--)
//		{
//			//如果大于则向后移动
//			if (arr[j] > num)
//			{
//				arr[j+1] = arr[j];
//			}
//			//如果不大于则放入，跳出循环
//			else if (arr[j] < num)
//			{
//				arr[j + 1] = num;
//				break;
//			}
//			//如果num太小了，则为队首
//			if (j == 0)
//			{
//				arr[j] = num;
//				break;
//			}
//		}
//		//长度++
//		Sorted++;
//	}
//	Print(arr, nlen);
//}
//
//void InsertSort(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 2)return;
//	//分成有序部分和无序部分
//	int j;
//	int i;//无序部分
//	int num;//标记数据
//	for (i = 1; i < nlen; i++)
//	{
//		j = i - 1;
//		num = arr[i];
//		//遍历有序部分,找到要插入的位置
//		while (arr[j] > num && j >= 0)
//		{
//			//向后移动
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		//如果是队首，j跳出循环是-1 
//		arr[j+1] = num;
//	}
//	Print(arr, nlen);
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	InsertSort(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}