#include<stdio.h>
//int main()
//(1)数组的设定//
	//	int arr1[10] = { 12,34,56 };//不完全初始化，剩下的元素默认为0
	//	char arr2[] = { 'a',98,0 };//98打印出来会是其对应的ascll值，不i加\0无法打印出准确值
	//	char arr3[] = "abc";
	//	printf("%s", arr3);//
	//	return 0;
	//}
//2）sizeof和strlen的使用//
	//1.//int main()
	//{
	//	int arr4[] = { 1,23,4,5,6,7 };
	//	char arr5[] = "abcdef";
	//	printf("%d\n", sizeof(arr4));
	//	printf("arr4中有几个元素%d\n", sizeof(arr4) / sizeof(arr4[0]));
	//	printf("%d\n", sizeof(arr5));//7  //一个字符占一个字节,\0算终止字符，也占一个字节  
	//	printf("%d\n", strlen(arr5));//6
	//	return 0;
	//
	//}
	//2.int main()
	//{
	//	char arr1[] = "abc";
	//	char arr2[] = { 'a','b','c' };
	//	printf("%d\n", sizeof(arr1));
	//	printf("%d\n", sizeof(arr2));
	//	printf("%d\n", strlen(arr1));
	//	printf("%d\n", strlen(arr2));
	//	return 0;
	//}
//(3)数组的访问//
	//int main()
	//{
	//	char arr1[] = "abcdef";
	//	int arr2[] = { 1,3,4,5,6,7 };
	//	int len1 = strlen(arr1);
	//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	//	for (int i = 0; i <len1; i++)
	//	{
	//		printf("%c", arr1[i]);
	//	}
	//	for (int j = 0; j < len2; j++)
	//	{
	//		printf("%d", arr2[j]);
	//	}
	//	return 0;
	//}

//(4)数组的地址和存放连续性
	//int main()
	//{
	//int arr2[] = { 1,3,4,5,6,7 };
	//int len2 = sizeof(arr2) / sizeof(arr2[0]);
	//for (int j = 0; j < len2; j++)
	//{
	//	printf("&arr2[%d]的地址为%p\n",j,&arr2[j]);
	//}
	//	return 0;
	//}
//（5）二维数组初始化//
	//int main()
	//{
	//	int arr0[3][4] = { 1,2,3,4,5,6 };//多的会自动填入下一行,其余的自动补0
	//	int arr1[3][4] = { {1,2,3,4} ,{ 4,3,2 } };//创建一个三行四列的数组
	//	int arr2[][4] = { {1,2,3,4} ,{ 4,3,2,1 } };//可以没有行，会按所给数据自动成行
	//	int arr3[2][] = { {1,2,3,4}, { 4,3,2,1 } };//不可以没有列，会报错
	//	return 0;
	//}
//(6)二维数值内存的连续性
	//int main()
	//{
	//	int arr1[3][4] = { {1,2,3,4},{4,3,2,1},{2,2,2,2} };
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 4; j++)
	//		{
	//			printf("&arr1[%d][%d]的地址为%p\n", i, j, &arr1[i][j]);
	//		}
	//	}
	//	return 0;
	//}