//#include<iostream>
//using namespace std;
//typedef struct node
//{
//	struct node* next;
//	int val;
//}list;
//void Print(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	for (int i = 0; i < nlen; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void BubbleSort(list* parr)
//{
//	if (parr == nullptr || parr->next == nullptr)return;
//	list* pNode = parr;
//	list* temp = nullptr;
//	//n-1趟
//	while (pNode->next)
//	{
//		temp = parr;
//		//n-1次比较
//		while (temp->next)
//		{
//
//			//如果前者大于后者
//			if (temp->val > temp->next->val)
//			{
//				//交换值
//				temp->val = temp->val ^ temp->next->val;
//				temp->next->val = temp->val ^ temp->next->val;
//				temp->val = temp->val ^ temp->next->val;
//			}
//			temp = temp->next;
//		}
//		pNode=pNode->next;
//	}
//}
//
//void BucketSort(int* arr, int nlen)
//{
//	if (arr == nullptr || nlen < 0)return;
//	//找到最小的
//	int min = arr[0];
//	//找到最大的--获得该次的位数
//	int max=arr[0];
//	for (int i = 0; i < nlen; i++)
//	{
//		if (max < arr[i])max = arr[i];
//		if (min > arr[i])min = arr[i];
//	}
//	
//	//拆位
//	int count = -1;
//	int num = max;
//	if (num < 0)num = -num;
//	while (num)
//	{
//		num /= 10;
//		count++;
//	}
//	//得到基础值
//	int flag = 1;
//	for (int i = 0; i < count; i++)flag *= 10;
//
//	//计算桶的个数
//	int BuckerNum = max/flag - min/flag + 1;
//
//	//定义桶，根据min~max应该有BuckerNum个桶
//	list** parr = new (list * [BuckerNum]);
//	memset(parr, 0, sizeof(list*) * BuckerNum);
//	int pflag = 0;//标记下标
//	//放入桶中
//	for (int i = 0; i < nlen; i++)
//	{
//		//arr[i]/flag得到基准值 -min/flag 得到该放的位置 1~9 对应0~8 因此减去1
//		pflag = arr[i] / flag-min/flag;
//		//采用头插法
//		list* ptemp=new list;
//		memset(ptemp, 0, sizeof(list));
//		ptemp->val = arr[i];
//		ptemp->next = parr[pflag];
//		parr[pflag] = ptemp;
//	}
//	//对链表排序
//	for (int i = 0; i < BuckerNum; i++)
//	{
//		BubbleSort(parr[i]);
//	}
//	//将桶的值依次放回
//	int k = 0;
//	for (int i = 0; i < BuckerNum; i++)
//	{
//		while (parr[i])
//		{
//			//list* pdel = parr[i];
//			arr[k] = parr[i]->val;
//			k++;
//			parr[i] = parr[i]->next;
//			//free(pdel);
//			//pdel = nullptr;
//		}
//	}
//	//回收桶
//	for (int i = 0; i < BuckerNum; i++)
//	{
//		while (parr[i])
//		{
//			list* pdel = parr[i];
//			parr[i] = parr[i]->next;
//			//回收节点
//			free(pdel);
//			pdel = nullptr;
//		}
//	}
//	delete parr;
//	parr = nullptr;
//}
//int main()
//{
//	int arr[] = { 5458,2549,2123,4697,1215,4852,9548,1528,1202};
//	int len = sizeof(arr) / sizeof(int);
//	BucketSort(arr, len);
//	Print(arr, len);
//	return 0;
//}