#include<stdio.h>
//如何避免为野指针
	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	*pa = 20;
	//	pa = NULL;//当不使用一个指针时可以将其赋值为NULL
	//	if (pa != NULL)
	//	{
	//		*pa = 20;
	//	}
	//	return 0;
	//}
//二.指针运算//
// （1）指针+-整数
	//int main()
	//{
	//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//	int* p = arr1;
	//	for (int i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p + 1;
	//	}
	//
	//	return 0;
	//}
	//int main()
	//{
	//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//	int* p = &arr1[9];
	//	for (int i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p-1;
	//	}
	//
	//	return 0;
	//}
//(2)指针+-指针
	//int main()
	//{	
	//	char ch[10] = { 0 };
	//
	//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	printf("%d", &arr1[9] - &arr1[0]);//在数组中指针+-指针得到两元素中间的元素个数（连带减去的元素）
	//	//printf("%d", &arr1[9] - &ch[0]);//不同数组无法相减，得到随机数
	//	return 0;
	//}
//例子:strlen的实现
	//int my_strlen(char* str)
	//{
	//	char* start = str;
	//	char* end = str;
	//	while (*end != '\0')
	//	{
	//		end++;
	//	}
	//	return end - start;
	//}
	//int main()
	//{
	//	char ch[] = "abcd";
	//	int len;
	//	len = my_strlen(ch);
	//	printf("%d", len);
	//	return 0;
	//}
//二级指针//
	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	int** ppa = &pa;//二级指针
	//	**ppa = 20;
	//	printf("%d", **ppa);
	//	return 0;
	//}
//指针数组//
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int c = 30;
	//	int* arr1[3] = { &a,&b,&c };//存放指针的数组
	//	for (int i = 0; i < 3; i++)
	//	{
	//		printf("% d", *arr1[i]);
	//	}
	//	return 0;
	//}
	//int main()
	//{
	//
	//	char arr[] = "hello,world";
	//	char* pc = arr;
	//	printf("%p\n", arr);
	//	printf("%p\n", &arr);
	//	printf("%p\n", pc);
	//	printf("%p\n", &arr[0]);
	//	printf("%p\n", arr[0]);
	//	return 0;
	//}