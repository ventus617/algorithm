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
//	//�ֳ����򲿷ֺ����򲿷�
//	int Sorted = 1;//����Ϊ1 ����
//	int i;//���򲿷�
//	int num;//�������
//	//ѭ��n-1��
//	for (i = 1; i < nlen; i++)
//	{
//		//��ȡҪ�������������
//		num = arr[i];
//		//�������򲿷�
//		for (int j = Sorted-1; j >-1; j--)
//		{
//			//�������������ƶ�
//			if (arr[j] > num)
//			{
//				arr[j+1] = arr[j];
//			}
//			//�������������룬����ѭ��
//			else if (arr[j] < num)
//			{
//				arr[j + 1] = num;
//				break;
//			}
//			//���num̫С�ˣ���Ϊ����
//			if (j == 0)
//			{
//				arr[j] = num;
//				break;
//			}
//		}
//		//����++
//		Sorted++;
//	}
//	Print(arr, nlen);
//}
//
//void InsertSort(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 2)return;
//	//�ֳ����򲿷ֺ����򲿷�
//	int j;
//	int i;//���򲿷�
//	int num;//�������
//	for (i = 1; i < nlen; i++)
//	{
//		j = i - 1;
//		num = arr[i];
//		//�������򲿷�,�ҵ�Ҫ�����λ��
//		while (arr[j] > num && j >= 0)
//		{
//			//����ƶ�
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		//����Ƕ��ף�j����ѭ����-1 
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