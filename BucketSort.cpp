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
//	//n-1��
//	while (pNode->next)
//	{
//		temp = parr;
//		//n-1�αȽ�
//		while (temp->next)
//		{
//
//			//���ǰ�ߴ��ں���
//			if (temp->val > temp->next->val)
//			{
//				//����ֵ
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
//	//�ҵ���С��
//	int min = arr[0];
//	//�ҵ�����--��øôε�λ��
//	int max=arr[0];
//	for (int i = 0; i < nlen; i++)
//	{
//		if (max < arr[i])max = arr[i];
//		if (min > arr[i])min = arr[i];
//	}
//	
//	//��λ
//	int count = -1;
//	int num = max;
//	if (num < 0)num = -num;
//	while (num)
//	{
//		num /= 10;
//		count++;
//	}
//	//�õ�����ֵ
//	int flag = 1;
//	for (int i = 0; i < count; i++)flag *= 10;
//
//	//����Ͱ�ĸ���
//	int BuckerNum = max/flag - min/flag + 1;
//
//	//����Ͱ������min~maxӦ����BuckerNum��Ͱ
//	list** parr = new (list * [BuckerNum]);
//	memset(parr, 0, sizeof(list*) * BuckerNum);
//	int pflag = 0;//����±�
//	//����Ͱ��
//	for (int i = 0; i < nlen; i++)
//	{
//		//arr[i]/flag�õ���׼ֵ -min/flag �õ��÷ŵ�λ�� 1~9 ��Ӧ0~8 ��˼�ȥ1
//		pflag = arr[i] / flag-min/flag;
//		//����ͷ�巨
//		list* ptemp=new list;
//		memset(ptemp, 0, sizeof(list));
//		ptemp->val = arr[i];
//		ptemp->next = parr[pflag];
//		parr[pflag] = ptemp;
//	}
//	//����������
//	for (int i = 0; i < BuckerNum; i++)
//	{
//		BubbleSort(parr[i]);
//	}
//	//��Ͱ��ֵ���ηŻ�
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
//	//����Ͱ
//	for (int i = 0; i < BuckerNum; i++)
//	{
//		while (parr[i])
//		{
//			list* pdel = parr[i];
//			parr[i] = parr[i]->next;
//			//���սڵ�
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