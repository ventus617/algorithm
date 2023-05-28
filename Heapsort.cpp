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
//	//建立初始堆 --大堆
//	int father = (nlen+1)/ 2-1;
//	int flag1;//左孩子
//	int flag2;//右孩子
//	int temp;//作为交换的
//	while (father > -1)
//	{
//		flag1 = 2*father + 1;
//		flag2 = 2*father + 2;
//		if (flag1 <= nlen&&father>-1)
//		{
//			//找到这几个的最大的
//			temp=FindMax(arr,flag1,flag2, father,nlen);
//			//不是就遍历，然后继续找上一个的
//			if(temp!=father)
//			{
//				arr[temp] = arr[temp] ^ arr[father];
//				arr[father] = arr[temp] ^ arr[father];
//				arr[temp] = arr[temp] ^ arr[father];
//				father = temp;//成为新的调整位置
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
//	SetHeap(arr, nlen-1);//得到大顶堆
//	//开始排序
//	//1.把最上面的交换到最后一个位置
//	//2.继续大顶堆排序
//	int begin = 0;
//	int end = nlen - 1;
//	while (end!=begin)
//	{
//		//交换
//		arr[begin] = arr[begin] ^ arr[end];
//		arr[end] = arr[begin] ^ arr[end];
//		arr[begin] = arr[begin] ^ arr[end];
//		end--;
//		//继续大顶堆排序
//		SetHeap(arr, end);
//	}
//
//}
//
//#define LEFT 2*(nRootID)+1
//#define RIGHT 2*(nRootID)+2
////针对单个节点进行调整
//void Adjust(int* arr, int nlen, int nRootID)
//{
//	int MAX;//记录最大的下标
//	//MAX最初都为节点的左孩子
//	for (MAX = LEFT; MAX < nlen; MAX = LEFT)
//	{
//		//如果左孩子存在 MAX<nlen
//		//直接判断右孩子是否存在
//		if (RIGHT < nlen)
//		{
//			if (arr[RIGHT] > arr[LEFT])
//			{
//				MAX = RIGHT;
//			}
//		}
//
//		//再比较父亲
//		if (arr[nRootID] < arr[MAX])
//		{
//			//如果父亲节点小，那么交换，大的为父亲
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			arr[MAX] = arr[MAX] ^ arr[nRootID];
//			arr[nRootID] = arr[MAX] ^ arr[nRootID];
//			//此时重新讨论的父亲节点就是被换上去的孩子
//			nRootID = MAX;
//		}
//		else//如果此时就是最大的，说明不需要调整了
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
//	//初始化大顶堆
//	for ( i = nlen / 2 - 1; i >=0; i--)
//	{
//		//开始调整每个父亲节点
//		Adjust(arr, nlen, i);
//	}
//	//排序
//	for ( i = nlen - 1; i > 0; i--)
//	{
//		//将最大值和最小值交换
//		arr[i] = arr[i] ^ arr[0];
//		arr[0] = arr[i] ^ arr[0];
//		arr[i] = arr[i] ^ arr[0];
//		//再调整堆顶
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