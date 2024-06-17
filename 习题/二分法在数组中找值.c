/*#include<stdio.h>
int two_fen(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)

		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}

		return -1;
	

}
	
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,22,34,57,89,123 };
	int k = 22;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int ret = two_fen(arr1, k, sz);
	if (ret == -1)
	{
		printf("不在arr1中");
	}
	else
	{
		printf("arr在数组中下标为%d", ret);
	}


	return 0;
}*/