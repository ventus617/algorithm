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
//	//ѭ������Ϊn-1
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		
//		//���б����Ĵ�������Ϊÿһ��ѭ������һ�����ֵ�ں���,��˾�-i,ֻ�Ƚϵ����һλ֮ǰ��-1
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
////���ֿ��ܻ��һ�ˣ���������˳��������
//void bubblesort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	int count = 0;
//	//ѭ������Ϊn-1
//	//Ҫ��������λ��
//	int Flag = nlen-1;
//	//����Ƿ���˳���
//	int FFlag;
//	//������һ�ν������±�
//	int FFFlag=0;
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		
//		FFlag = Flag;
//		//���б����Ĵ�������Ϊÿһ��ѭ������һ�����ֵ�ں���,��˾�-i,ֻ�Ƚϵ����һλ֮ǰ��-1
//		for (int j = 0; j < Flag; j++)
//		{
//			count++;
//			if (arr[j] > arr[j + 1])
//			{
//				//swap(arr[j], arr[j + 1]);
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j + 1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//				//��������˽�������ô���һ�ν�����λ�� ������һ����Ҫ��������λ�� 1 5 9 10 14 7 23 25 27 -- 14��λ�� ������һ��Ҫ��������λ�� 5
//				FFFlag = j;
//			}
//		}
//		Flag = FFFlag;
//		//�����һ�ξ���˳��� ��ô��˵��û�н��й�������flag��ֵ����䣬��˾�ֱ��break
//		if (Flag == FFlag)break;
//	}
//	Print(arr, nlen);
//	cout << count << endl;
//}
//
//
//void bubblesort3(int* arr, int nlen)
//{
//	//��������Ĵ���
//	int count = 0;
//	//flag��Ϊ���λ����¼���һ�ν�����λ��
//	int flag;
//	if (arr == nullptr || nlen < 0)return;
//	//ѭ������Ϊn-1
//	for (int i = 0; i < nlen - 1; i++)
//	{
//		//ÿ�ζ���Ϊ��0
//		flag = 0;
//		//���б����Ĵ�������Ϊÿһ��ѭ������һ�����ֵ�ں���,��˾�-i,ֻ�Ƚϵ����һλ֮ǰ��-1
//		for (int j = 0; j < nlen - i - 1; j++)
//		{
//			count++;
//			//nlen-nlen+flag-1����˾ͱ�����flag-1��λ�þ�����
//			if (arr[j] > arr[j + 1])
//			{
//				
//				//swap(arr[j], arr[j + 1]);
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j + 1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//				//��������˽������ͼ�¼
//				flag = j + 1;
//			}
//		}
//		if (flag == 0)break;
//		//ԭ����nlen-1-i�ˣ���Ϊ��¼�����һ�ν�����λ�ã�������Ӧ����f-1 nlen-1-i=flag-1--->nlen-flag=i
//		//��ΪҪi++�����-1
//		//Ҳ����˵�ı���i�Ĵ�С����������ӽ�nlen-1
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