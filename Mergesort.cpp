//#include<iostream>
//using namespace std;
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
//
//void Merge(int* arr, int begin1, int end1,int begin2,int end2)
//{
//	int flag1 = begin1;
//	int flag2 = end1;
//	int flag3 = begin2;
//	int flag4 = end2;
//	if (arr == nullptr)return;
//	int len = end2 - begin1 + 1;
//	int* SortArr = new int[len] {0};
//	//合并有序数组
//	int i = 0;
//	while (flag1 <= flag2 && flag3 <= flag4)
//	{
//		if (arr[flag1] < arr[flag3])
//		{
//			SortArr[i++] = arr[flag1++];
//		}
//		else
//		{
//			SortArr[i++] = arr[flag3++];
//		}
//	}
//	//将剩余的也合并回去
//	while (flag1 <= flag2)
//	{
//		SortArr[i++] = arr[flag1++];
//	}
//	while (flag3 <= flag4)
//	{
//		SortArr[i++] = arr[flag3++];
//	}
//	//重新赋值回去
//	int j; //以begin1为基数，进行赋值
//	for ( j= 0; j < end2-begin1+1; j++)
//	{
//		arr[j+begin1] = SortArr[j];
//	}
//	delete[]SortArr;
//}
//
//void MergeSort(int* arr, int begin, int end)
//{
//	if (arr == nullptr)return;
//	//如果就一个数了，说明肯定有序了，就不用分了
//	if (begin >= end)return;
//	//分成两部分
//	int Mid = (begin + end)/2;
//	//左边分
//	MergeSort(arr, begin, Mid);
//	//右边分
//	MergeSort(arr, Mid + 1, end);
//	//当有序了，就合并
//	Merge(arr, begin,Mid,Mid+1,end);
//}
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	int len = sizeof(arr) / sizeof(int);
//	MergeSort(arr, 0, len - 1);
//	Print(arr, len);
//	return 0;
//}