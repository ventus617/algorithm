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
////�ڿ�����������汾
//int DigAPit(int* arr, int begin, int end)
//{
//	//�ҵ���׼ֵ���ڸ���
//	int flag = arr[begin];
//	//���Ҫ�����Ǵ��ҿ�ʼ��
//	int reverse = 0;
//	while (begin <= end)
//	{
//		//���begin��end������ˣ�˵�����ֵ�ͷ�������
//		if (begin == end)
//		{
//			arr[begin] = flag;
//			break;
//		}
//		//��Ϊ����ǰ���λ�ã���˴���������С�ķ����⣬��������˸���
//		if (reverse == 0)
//		{
//			if (arr[end] <= flag)
//			{
//				arr[begin] = arr[end];
//				begin++;
//				//�л�Ϊ����Ŀ���
//				reverse = 1;
//				
//			}
//			//���Ǿͽ�����
//			else end--;
//		}
//		else
//		{
//			//���Ǻ���ģ����������Ҵ�ķź��棬ǰ������˸���
//			if (arr[begin] >= flag)
//			{
//				arr[end] = arr[begin];
//				end--;
//				//�л�Ϊǰ��Ŀ���
//				reverse = 0;
//			}
//			//���Ǿͽ�����
//			else begin++;
//
//		}
//	}
//	//����������ˣ�˵���ͷ�������
//	//arr[begin] = flag;
//	return begin;
//}
////����ָ��ֱ�ӻ��ֳ�С���䣬ҪС�����ֵ
//int CutMin(int* arr, int begin, int end)
//{
//	//�ҵ���׼ֵ���ڸ���
//	int flag = arr[end];
//	//С�����ʼľ�У������begin-1
//	int slow = begin-1;
//	int i;
//	for ( i = begin; i <= end; i++)
//	{
//		//���С�ͷ���С��������
//		//��ȵ�ʱ������������һ����ֱ�ӱ�����ĩβ�ˣ����ʱ�򽻻���ֵ֮�󣬾Ͳ����ٱ�׼ֵ�����ˣ�һ�������м�,ֱ�ӷ��뼴��
//		if (arr[i] <= flag)
//		{
//			//С������չ����������������С���䳤��++
//			slow++;
//			//�����i��һ���ģ���û��Ҫ�����ˣ�������ͬһ��ֵ
//			if (slow != i)
//			{
//				arr[slow] = arr[slow] ^ arr[i];
//				arr[i] = arr[slow] ^ arr[i];
//				arr[slow] = arr[slow] ^ arr[i];
//			}
//		}
//	}
//	////�����������<=  ����Ҫ��������׼ֵ
//	//slow++;
//	//if (end != slow)
//	//{
//	//	arr[slow] = arr[slow] ^ arr[end];
//	//	arr[end] = arr[slow] ^ arr[end];
//	//	arr[slow] = arr[slow] ^ arr[end];
//	//}
//	return slow;
//}
//
//void quickSort(int* arr, int begin,int end)
//{
//	if (arr==nullptr||begin >= end)return;
//	//�ҵ��ź��������ı��
//	int slow = CutMin(arr, begin, end);
//	//��ǵ����
//	quickSort(arr, begin, slow - 1);
//	//��ǵ��Ҳ�
//	quickSort(arr, slow+1, end);
//}
//
//
//int main()
//{
//	int arr[] = { 1,5,7,4,3,2,0,19,11,10,9,20 };
//	int len = sizeof(arr) / sizeof(int);
//	quickSort(arr, 0, len - 1);
//	Print(arr, len);
//	return 0;
//}