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
////挖坑填补法，基础版本
//int DigAPit(int* arr, int begin, int end)
//{
//	//找到标准值，挖个坑
//	int flag = arr[begin];
//	//标记要从左还是从右开始找
//	int reverse = 0;
//	while (begin <= end)
//	{
//		//如果begin和end都相等了，说明标记值就放在这了
//		if (begin == end)
//		{
//			arr[begin] = flag;
//			break;
//		}
//		//因为坑是前面的位置，因此从右向左找小的放在这，后面就挖了个坑
//		if (reverse == 0)
//		{
//			if (arr[end] <= flag)
//			{
//				arr[begin] = arr[end];
//				begin++;
//				//切换为后面的坑了
//				reverse = 1;
//				
//			}
//			//不是就接着找
//			else end--;
//		}
//		else
//		{
//			//坑是后面的，从左向右找大的放后面，前面就挖了个坑
//			if (arr[begin] >= flag)
//			{
//				arr[end] = arr[begin];
//				end--;
//				//切换为前面的坑了
//				reverse = 0;
//			}
//			//不是就接着找
//			else begin++;
//
//		}
//	}
//	//如果最后都相等了，说明就放在这了
//	//arr[begin] = flag;
//	return begin;
//}
////区间分割法，直接划分成小区间，要小区间的值
//int CutMin(int* arr, int begin, int end)
//{
//	//找到标准值，挖个坑
//	int flag = arr[end];
//	//小区间最开始木有，因此是begin-1
//	int slow = begin-1;
//	int i;
//	for ( i = begin; i <= end; i++)
//	{
//		//如果小就放在小区间里面
//		//相等的时候分两种情况，一种是直接遍历在末尾了，这个时候交换了值之后，就不用再标准值放入了，一种是在中间,直接放入即可
//		if (arr[i] <= flag)
//		{
//			//小区间扩展，当满足条件，则小区间长度++
//			slow++;
//			//如果和i是一样的，就没必要交换了，它俩是同一个值
//			if (slow != i)
//			{
//				arr[slow] = arr[slow] ^ arr[i];
//				arr[i] = arr[slow] ^ arr[i];
//				arr[slow] = arr[slow] ^ arr[i];
//			}
//		}
//	}
//	////如果不在里面<=  则需要额外放入标准值
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
//	//找到排好序的区间的标记
//	int slow = CutMin(arr, begin, end);
//	//标记的左侧
//	quickSort(arr, begin, slow - 1);
//	//标记的右侧
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