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
//void CountSort1(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	//找最大最小值
//	int max=arr[0];
//	int min=arr[0];
//	for (int i = 1; i < nlen; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	//申请数组
//	int len = max - min+1;
//	int* Count = new int[len] {0};
//	//开始计数
//	for (int i = 0; i < nlen; i++)
//	{
//		Count[arr[i] - min]++;
//	}
//	//放置
//	int j;
//	int i;
//	j = 0;
//	for ( i = 0; i < len; i++)
//	{
//		while (Count[i] != 0)
//		{
//			arr[j] = i + min;
//			Count[i]--;
//			j++;
//		}
//	}
//	Print(arr, nlen);
//	delete Count;
//	Count = nullptr;
//}
//
//void CountSort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	//找最大最小值
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 1; i < nlen; i++)
//	{
//		if (max < arr[i])max = arr[i];
//		if (min > arr[i])min = arr[i];
//	}
//	//申请数组
//	int len = max - min + 1;
//	int* Count = new int[len] {0};
//	//开始计数
//	for (int i = 0; i < nlen; i++)
//	{
//		Count[arr[i] - min]++;
//	}
//	//计算每一个值的最后一个名次
//	for (int i = 1; i < len; i++)
//	{
//		Count[i] = Count[i - 1] + Count[i];
//	}
//	//申请新空间
//	int* newarr = new int[nlen] {0};
//	//排序，倒叙找，倒叙找的数名次里面的下标就是其对应的最后一个名次(第10名对应的下标就是9)
//	for (int i = nlen-1; i >-1; i--)
//	{
//		//arr[i]-min 找到当前元素在count中对应的下标
//		//count[arr[i]-min-1]找到当前元素的名次-1，名次-1就是该元素在原数组的应有的位置
//		newarr[Count[arr[i] - min]-1] = arr[i];
//		Count[arr[i] - min]--;
//	}
//	//放置
//	for (int i = 0; i < nlen; i++)
//	{
//		arr[i] = newarr[i];
//	}
//	Print(arr, nlen);
//	delete newarr;
//	newarr = nullptr;
//	delete Count;
//	Count = nullptr;
//}
//
//int main()
//{
//	int arr[] = { 11,5,17,14,13,12,10,19,11,10,19,20 };
//	CountSort2(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}