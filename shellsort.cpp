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
//			//����
//			for (j = i+GAP; j < nlen; j += GAP)
//			{
//				num = arr[j];
//				k = j - GAP;
//				////��������
//				while (arr[k] >= num && k >= 0)
//				{
//					arr[k + GAP] = arr[k];
//					k -= GAP;
//				}
//				arr[k + GAP] = num;
//			}
//			
//		}
//		//��С����
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
//		//����,�����Ż���ÿ����ʵ�Ƕ����ģ��������ɣ����j��GAP��ʼ����(�ҵĶ���ÿһ��Ҫ���������Ԫ��)
//		for (j = GAP; j < nlen; j ++)
//		{
//			num = arr[j];
//			k = j - GAP;
//			////��������
//			while (arr[k] >= num && k >= 0)
//			{
//				arr[k + GAP] = arr[k];
//				k -= GAP;
//			}
//			arr[k + GAP] = num;
//		}
//		//��С����
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