#include<stdio.h>
//��α���ΪҰָ��
	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	*pa = 20;
	//	pa = NULL;//����ʹ��һ��ָ��ʱ���Խ��丳ֵΪNULL
	//	if (pa != NULL)
	//	{
	//		*pa = 20;
	//	}
	//	return 0;
	//}
//��.ָ������//
// ��1��ָ��+-����
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
//(2)ָ��+-ָ��
	//int main()
	//{	
	//	char ch[10] = { 0 };
	//
	//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	printf("%d", &arr1[9] - &arr1[0]);//��������ָ��+-ָ��õ���Ԫ���м��Ԫ�ظ�����������ȥ��Ԫ�أ�
	//	//printf("%d", &arr1[9] - &ch[0]);//��ͬ�����޷�������õ������
	//	return 0;
	//}
//����:strlen��ʵ��
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
//����ָ��//
	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	int** ppa = &pa;//����ָ��
	//	**ppa = 20;
	//	printf("%d", **ppa);
	//	return 0;
	//}
//ָ������//
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int c = 30;
	//	int* arr1[3] = { &a,&b,&c };//���ָ�������
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