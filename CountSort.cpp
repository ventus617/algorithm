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
//	//�������Сֵ
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
//	//��������
//	int len = max - min+1;
//	int* Count = new int[len] {0};
//	//��ʼ����
//	for (int i = 0; i < nlen; i++)
//	{
//		Count[arr[i] - min]++;
//	}
//	//����
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
//	//�������Сֵ
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 1; i < nlen; i++)
//	{
//		if (max < arr[i])max = arr[i];
//		if (min > arr[i])min = arr[i];
//	}
//	//��������
//	int len = max - min + 1;
//	int* Count = new int[len] {0};
//	//��ʼ����
//	for (int i = 0; i < nlen; i++)
//	{
//		Count[arr[i] - min]++;
//	}
//	//����ÿһ��ֵ�����һ������
//	for (int i = 1; i < len; i++)
//	{
//		Count[i] = Count[i - 1] + Count[i];
//	}
//	//�����¿ռ�
//	int* newarr = new int[nlen] {0};
//	//���򣬵����ң������ҵ�������������±�������Ӧ�����һ������(��10����Ӧ���±����9)
//	for (int i = nlen-1; i >-1; i--)
//	{
//		//arr[i]-min �ҵ���ǰԪ����count�ж�Ӧ���±�
//		//count[arr[i]-min-1]�ҵ���ǰԪ�ص�����-1������-1���Ǹ�Ԫ����ԭ�����Ӧ�е�λ��
//		newarr[Count[arr[i] - min]-1] = arr[i];
//		Count[arr[i] - min]--;
//	}
//	//����
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