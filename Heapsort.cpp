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
//int FindMax(int* arr, int flag1, int flag2, int father,int nlen)
//{
//	int max;
//	if (flag2 <= nlen)
//	{
//		if (arr[flag1] > arr[flag2]) max = arr[flag1];
//		else max = arr[flag2];
//		if (max < arr[father])
//		{
//			max = arr[father];
//			return father;
//		}
//		else
//		{
//			if (max == arr[flag1])return flag1;
//			else return flag2;
//		}
//	}
//	else
//	{
//		if (arr[flag1] > arr[father])return flag1;
//		else return father;
//	}
//	
//}
//
//
//void SetHeap(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen <=0)return;
//	//������ʼ�� --���
//	int father = (nlen+1)/ 2-1;
//	int flag1;//����
//	int flag2;//�Һ���
//	int temp;//��Ϊ������
//	while (father > -1)
//	{
//		flag1 = 2*father + 1;
//		flag2 = 2*father + 2;
//		if (flag1 <= nlen&&father>-1)
//		{
//			//�ҵ��⼸��������
//			temp=FindMax(arr,flag1,flag2, father,nlen);
//			//���Ǿͱ�����Ȼ���������һ����
//			if(temp!=father)
//			{
//				arr[temp] = arr[temp] ^ arr[father];
//				arr[father] = arr[temp] ^ arr[father];
//				arr[temp] = arr[temp] ^ arr[father];
//				father = temp;//��Ϊ�µĵ���λ��
//				continue;
//			}
//		}
//		father = father - 1;
//	}
//}
//
//void HeapSort(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	SetHeap(arr, nlen-1);//�õ��󶥶�
//	//��ʼ����
//	//1.��������Ľ��������һ��λ��
//	//2.�����󶥶�����
//	int begin = 0;
//	int end = nlen - 1;
//	while (end!=begin)
//	{
//		//����
//		arr[begin] = arr[begin] ^ arr[end];
//		arr[end] = arr[begin] ^ arr[end];
//		arr[begin] = arr[begin] ^ arr[end];
//		end--;
//		//�����󶥶�����
//		SetHeap(arr, end);
//	}
//
//}
//
//#define LEFT 2*(nRootID)+1
//#define RIGHT 2*(nRootID)+2
////��Ե����ڵ���е���
//void Adjust(int* arr, int nlen, int nRootID)
//{
//	int MAX;//��¼�����±�
//	//MAX�����Ϊ�ڵ������
//	for (MAX = LEFT; MAX < nlen; MAX = LEFT)
//	{
//		//������Ӵ��� MAX<nlen
//		//ֱ���ж��Һ����Ƿ����
//		if (RIGHT < nlen)
//		{
//			if (arr[RIGHT] > arr[LEFT])
//			{
//				MAX = RIGHT;
//			}
//		}
//
//		//�ٱȽϸ���
//		if (arr[nRootID] < arr[MAX])
//		{
//			//������׽ڵ�С����ô���������Ϊ����
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			arr[MAX] = arr[MAX] ^ arr[nRootID];
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			//��ʱ�������۵ĸ��׽ڵ���Ǳ�����ȥ�ĺ���
//			nRootID = MAX;
//		}
//		else//�����ʱ�������ģ�˵������Ҫ������
//		{
//			break;
//		}
//	}
//
//}
//
//void HeapSort2(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	int i;
//	//��ʼ���󶥶�
//	for ( i = nlen / 2 - 1; i >=0; i--)
//	{
//		//��ʼ����ÿ�����׽ڵ�
//		Adjust(arr, nlen, i);
//	}
//	//����
//	for ( i = nlen - 1; i > 0; i--)
//	{
//		//�����ֵ����Сֵ����
//		arr[i] = arr[i] ^ arr[0];
//		arr[0] = arr[i] ^ arr[0];
//		arr[i] = arr[i] ^ arr[0];
//		//�ٵ����Ѷ�
//		Adjust(arr, i, 0);
//	}
//}
//
//int main()
//{
//	int arr[] = { 8,29,23,4,15,2,9,28,1 };
//	int len = sizeof(arr) / sizeof(int);
//	HeapSort2(arr, len);
//	Print(arr, len);
//	return 0;
//}