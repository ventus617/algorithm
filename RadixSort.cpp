#include<iostream>
using namespace std;
typedef struct node
{
	struct node* next;
	int val;
}list;
void Print(int* arr, int nlen)
{
	if (arr == nullptr || nlen < 0)return;
	for (int i = 0; i < nlen; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void RadixSort(int*arr,int nlen)
{
	if (arr == nullptr || nlen < 0)return;
	//�ҵ������Сֵ
	int max=arr[0];
	int min=arr[0];
	int maxIndex;
	int minIndex;
	for (int i = 0; i < nlen; i++)
	{
		if (arr[i] > max)max = arr[i];
		if (arr[i] < min)min = arr[i];
	}
	//�õ�λ��
	int num = max;
	int count = 0;
	while (num)
	{
		num /= 10;
		count++;
	}
	//��λ����
	int flag;
	int position;
	max = arr[0];
	min = arr[0];
	for (int i = 0; i <count ; i++)
	{
		num = 1;
		//�õ�����
		flag = i;
		while(flag)
		{
			num *= 10;
			flag--;
		}
		max = max / num % 10;
		min = min / num % 10;
		//�õ�ÿһ�ֵĻ�׼ֵ
		for (int l = 0; l < nlen; l++)
		{
			if (max < (arr[l] / num % 10))max = arr[l] / num % 10;
			if (min > (arr[l] / num % 10))min = arr[l] / num % 10;
		}
		maxIndex = max;
		minIndex = min;
		int len;
		len = maxIndex - minIndex + 1;
		//������������
		list** radix = new list * [len];
		memset(radix, 0, sizeof(list*) * len);
		//����βָ������
		list** radixTail = new list * [len];
		memset(radixTail, 0, sizeof(list*) * len);
		//����������
		for (int j = 0; j < nlen; j++)
		{
			//�õ��÷����λ��
			position = (arr[j] / num) % 10 - minIndex;
			//β���
			list* ptemp = new list;
			memset(ptemp, 0, sizeof(list));
			ptemp->val = arr[j];
			ptemp->next = nullptr;
			if (radix[position] == nullptr)
			{
				radix[position] = ptemp;
			}
			else
			{
				radixTail[position]->next = ptemp;
			}
			radixTail[position] = ptemp;
		}
		//�Ż�ԭ����
		int m = 0;
		for (int k = 0; k < len; k++)
		{
			while (radix[k])
			{
				arr[m] = radix[k]->val;
				//���ո�����
				list* temp = radix[k];
				radix[k] = radix[k]->next;
				delete temp;
				temp = nullptr;
				m++;
			}
		}
		//�ͷ�
		delete radix;
		radix = nullptr;
	}

}
int main()
{
	int arr[] = { 125,15,9,89794,1654,65,584,6269,2315 };
	int len = sizeof(arr) / sizeof(int);
	RadixSort(arr, len);
	Print(arr, len);
	return 0;
}