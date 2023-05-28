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
//void shellsort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	//GAP
//	int GAP=nlen/2;
//	int i;
//	int j;
//	int k;
//	int num;
//	while (GAP)
//	{
//		for (i = 1; i < GAP;i++)
//		{
//			//分组
//			for (j = i+GAP; j < nlen; j += GAP)
//			{
//				num = arr[j];
//				k = j - GAP;
//				////插入排序
//				while (arr[k] >= num && k >= 0)
//				{
//					arr[k + GAP] = arr[k];
//					k -= GAP;
//				}
//				arr[k + GAP] = num;
//			}
//			
//		}
//		//缩小增量
//		GAP /= 2;
//	}
//	Print(arr, nlen);
//}
//
//void shellsort1(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	//GAP
//	int GAP = nlen / 2;
//	int j;
//	int k;
//	int num;
//	while (GAP)
//	{
//		//分组,代码优化，每组其实是独立的，按序处理即可，因此j从GAP开始即可(找的都是每一组要插入的无序元素)
//		for (j = GAP; j < nlen; j ++)
//		{
//			num = arr[j];
//			k = j - GAP;
//			////插入排序
//			while (arr[k] >= num && k >= 0)
//			{
//				arr[k + GAP] = arr[k];
//				k -= GAP;
//			}
//			arr[k + GAP] = num;
//		}
//		//缩小增量
//		GAP /= 2;
//	}
//	Print(arr, nlen);
//}
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	shellsort1(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}