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
//	int flag;//��¼���ֵ���±�λ��
//	int i;
//	int j;
//	//һ��n-1��
//	for ( i = 0; i < nlen - 1; i++)
//	{
//		//���ÿ�����λ�õ��±�nlen-1-i
//		flag = nlen - i-1;
//		//ѡ�����ķ������һ��λ��,ÿ����һ�ˣ����൱��ȷ����һ��λ���ˣ���˿����ٱ���һ����
//		for (j = 0; j < nlen - i; j++)
//		{
//			if (arr[flag]<arr[j])
//			{
//				flag = j;
//			}
//		}
//		j--;
//		//����ѭ����ʱ�� j=nlen-i ��˻�Ҫ-1
//		//�����ͬ�Ͳ���Ҫ������
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
//	int flag;//��¼��Сֵ���±�λ��
//	int i;
//	int j;
//	//һ��n-1��
//	for (i = 0; i < nlen - 1; i++)
//	{
//		flag = i;
//		//ѡ����С�ķ�����ǰ��һ��λ��,ÿ����һ�ˣ����൱��ȷ����һ��λ���ˣ���˿����ٱ���һ����
//		for (j = i; j < nlen; j++)
//		{
//			if (arr[flag] > arr[j])
//			{
//				flag = j;
//			}
//		}
//		//�����ͬ�Ͳ���Ҫ������
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