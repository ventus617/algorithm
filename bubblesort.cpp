//#include<iostream>
//using namespace std;
//
//void swap(int &num1, int &num2)
//{
//	int temp = 0;
//	temp = num2;
//	num2 = num1;
//	num1 = temp;
//}
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
//void bubblesort1(int* arr,int nlen)
//{
//	int count = 0;
//	if (arr == nullptr || nlen < 0)return;
//	//循环次数为n-1
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		
//		//进行遍历的次数，因为每一次循环就有一个最大值在后面,因此就-i,只比较到最后一位之前就-1
//		for (int j = 0; j < nlen - i-1; j++)
//		{
//			count++;
//			if (arr[j] > arr[j + 1])
//			{
//				//swap(arr[j], arr[j + 1]);
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j+1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//			}
//		}
//	}
//	Print(arr, nlen);
//	cout << count << endl;
//}
//
//
//
////这种可能会多一趟，依靠的是顺序来跳出
//void bubblesort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	int count = 0;
//	//循环次数为n-1
//	//要遍历到的位置
//	int Flag = nlen-1;
//	//标记是否是顺序的
//	int FFlag;
//	//标记最后一次交换的下标
//	int FFFlag=0;
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		
//		FFlag = Flag;
//		//进行遍历的次数，因为每一次循环就有一个最大值在后面,因此就-i,只比较到最后一位之前就-1
//		for (int j = 0; j < Flag; j++)
//		{
//			count++;
//			if (arr[j] > arr[j + 1])
//			{
//				//swap(arr[j], arr[j + 1]);
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j + 1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//				//如果发生了交换，那么最后一次交换的位置 就是下一次需要遍历到的位置 1 5 9 10 14 7 23 25 27 -- 14的位置 就是下一次要遍历到的位置 5
//				FFFlag = j;
//			}
//		}
//		Flag = FFFlag;
//		//如果有一次就是顺序的 那么就说明没有进行过交换，flag的值不会变，因此就直接break
//		if (Flag == FFlag)break;
//	}
//	Print(arr, nlen);
//	cout << count << endl;
//}
//
//
//void bubblesort3(int* arr, int nlen)
//{
//	//计算遍历的次数
//	int count = 0;
//	//flag作为标记位，记录最后一次交换的位置
//	int flag;
//	if (arr == nullptr || nlen < 0)return;
//	//循环次数为n-1
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		//每次都认为是0
//		flag = 0;
//		//进行遍历的次数，因为每一次循环就有一个最大值在后面,因此就-i,只比较到最后一位之前就-1
//		for (int j = 0; j < nlen - i - 1; j++)
//		{
//			count++;
//			//nlen-nlen+flag-1，因此就遍历到flag-1的位置就行了
//			if (arr[j] > arr[j + 1])
//			{
//				
//				//swap(arr[j], arr[j + 1]);
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j + 1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//				//如果发生了交换，就记录
//				flag = j + 1;
//			}
//		}
//		if (flag == 0)break;
//		//原先是nlen-1-i趟，因为记录了最后一次交换的位置，趟数就应该是f-1 nlen-1-i=flag-1--->nlen-flag=i
//		//因为要i++，因此-1
//		//也就是说改变了i的大小，让它更快接近nlen-1
//		i = nlen - flag - 1;
//	}
//	Print(arr, nlen);
//	cout << count << endl;
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	bubblesort3(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}