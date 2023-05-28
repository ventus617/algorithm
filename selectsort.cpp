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
//void selectsortMax(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	int flag;//记录最大值的下标位置
//	int i;
//	int j;
//	//一共n-1趟
//	for ( i = 0; i < nlen - 1; i++)
//	{
//		//标记每次最大位置的下标nlen-1-i
//		flag = nlen - i-1;
//		//选择最大的放在最后一个位置,每进行一趟，就相当于确认了一个位置了，因此可以少遍历一个数
//		for (j = 0; j < nlen - i; j++)
//		{
//			if (arr[flag]<arr[j])
//			{
//				flag = j;
//			}
//		}
//		j--;
//		//跳出循环的时候 j=nlen-i 因此还要-1
//		//如果相同就不需要交换了
//		if (flag != nlen - i-1)
//		{
//			arr[flag] = arr[j] ^ arr[flag];
//			arr[j] = arr[j] ^ arr[flag];
//			arr[flag] = arr[j] ^ arr[flag];
//		}
//	}
//	Print(arr, nlen);
//}
//
//void selectsortMin(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	int flag;//记录最小值的下标位置
//	int i;
//	int j;
//	//一共n-1趟
//	for (i = 0; i < nlen - 1; i++)
//	{
//		flag = i;
//		//选择最小的放在最前面一个位置,每进行一趟，就相当于确认了一个位置了，因此可以少遍历一个数
//		for (j = i; j < nlen; j++)
//		{
//			if (arr[flag] > arr[j])
//			{
//				flag = j;
//			}
//		}
//		//如果相同就不需要交换了
//		if (flag != i)
//		{
//			arr[flag] = arr[i] ^ arr[flag];
//			arr[i] = arr[i] ^ arr[flag];
//			arr[flag] = arr[i] ^ arr[flag];
//		}
//	}
//	Print(arr, nlen);
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	selectsortMax(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}