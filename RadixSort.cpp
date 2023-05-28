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
	//找到最大最小值
	int max=arr[0];
	int min=arr[0];
	int maxIndex;
	int minIndex;
	for (int i = 0; i < nlen; i++)
	{
		if (arr[i] > max)max = arr[i];
		if (arr[i] < min)min = arr[i];
	}
	//得到位数
	int num = max;
	int count = 0;
	while (num)
	{
		num /= 10;
		count++;
	}
	//按位处理
	int flag;
	int position;
	max = arr[0];
	min = arr[0];
	for (int i = 0; i <count ; i++)
	{
		num = 1;
		//得到基数
		flag = i;
		while(flag)
		{
			num *= 10;
			flag--;
		}
		max = max / num % 10;
		min = min / num % 10;
		//得到每一轮的基准值
		for (int l = 0; l < nlen; l++)
		{
			if (max < (arr[l] / num % 10))max = arr[l] / num % 10;
			if (min > (arr[l] / num % 10))min = arr[l] / num % 10;
		}
		maxIndex = max;
		minIndex = min;
		int len;
		len = maxIndex - minIndex + 1;
		//创建基数数组
		list** radix = new list * [len];
		memset(radix, 0, sizeof(list*) * len);
		//创建尾指针数组
		list** radixTail = new list * [len];
		memset(radixTail, 0, sizeof(list*) * len);
		//放入数组中
		for (int j = 0; j < nlen; j++)
		{
			//得到该放入的位置
			position = (arr[j] / num) % 10 - minIndex;
			//尾添加
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
		//放回原数组
		int m = 0;
		for (int k = 0; k < len; k++)
		{
			while (radix[k])
			{
				arr[m] = radix[k]->val;
				//回收该区域
				list* temp = radix[k];
				radix[k] = radix[k]->next;
				delete temp;
				temp = nullptr;
				m++;
			}
		}
		//释放
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