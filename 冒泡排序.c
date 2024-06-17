#include<stdio.h>
	//void bubble_sort(int arr[],int len)
	//{
	//	for (int i = 0; i <len-1; i++)//len=10
	//	{
	//		int flag = 1;//用来测试是否已经已经排序好（每进行一次大循环测试一次）
	//		for (int j = 0; j <len-i-1; j++)
	//		{
	//			if (arr[j] > arr[j + 1])
	//			{
	//				int imp = arr[j];
	//				arr[j] = arr[j + 1];
	//				arr[j + 1] = imp;
	//				flag = 0;
	//			}
	//		}
	//		if (flag == 1)
	//			break;
	//
	//	}
	//}
	//
	//int main()
	//{
	//	int arr1[] = { 1,2,3,4,5,6,7,9,8 };
	//	int len = sizeof(arr1) / sizeof(arr1[0]);
	//	bubble_sort(arr1, len);//arr传过去的为首元素的地址&arr[0]
	//	for (int i = 0; i < len; i++)
	//	{
	//		printf("%d", arr1[i]);
	//	}
	//
	//	return 0;
	//}