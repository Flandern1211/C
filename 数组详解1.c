#include<stdio.h>
//int main()
//(1)������趨//
	//	int arr1[10] = { 12,34,56 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
	//	char arr2[] = { 'a',98,0 };//98��ӡ�����������Ӧ��ascllֵ����i��\0�޷���ӡ��׼ȷֵ
	//	char arr3[] = "abc";
	//	printf("%s", arr3);//
	//	return 0;
	//}
//2��sizeof��strlen��ʹ��//
	//1.//int main()
	//{
	//	int arr4[] = { 1,23,4,5,6,7 };
	//	char arr5[] = "abcdef";
	//	printf("%d\n", sizeof(arr4));
	//	printf("arr4���м���Ԫ��%d\n", sizeof(arr4) / sizeof(arr4[0]));
	//	printf("%d\n", sizeof(arr5));//7  //һ���ַ�ռһ���ֽ�,\0����ֹ�ַ���Ҳռһ���ֽ�  
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
//(3)����ķ���//
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

//(4)����ĵ�ַ�ʹ��������
	//int main()
	//{
	//int arr2[] = { 1,3,4,5,6,7 };
	//int len2 = sizeof(arr2) / sizeof(arr2[0]);
	//for (int j = 0; j < len2; j++)
	//{
	//	printf("&arr2[%d]�ĵ�ַΪ%p\n",j,&arr2[j]);
	//}
	//	return 0;
	//}
//��5����ά�����ʼ��//
	//int main()
	//{
	//	int arr0[3][4] = { 1,2,3,4,5,6 };//��Ļ��Զ�������һ��,������Զ���0
	//	int arr1[3][4] = { {1,2,3,4} ,{ 4,3,2 } };//����һ���������е�����
	//	int arr2[][4] = { {1,2,3,4} ,{ 4,3,2,1 } };//����û���У��ᰴ���������Զ�����
	//	int arr3[2][] = { {1,2,3,4}, { 4,3,2,1 } };//������û���У��ᱨ��
	//	return 0;
	//}
//(6)��ά��ֵ�ڴ��������
	//int main()
	//{
	//	int arr1[3][4] = { {1,2,3,4},{4,3,2,1},{2,2,2,2} };
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 4; j++)
	//		{
	//			printf("&arr1[%d][%d]�ĵ�ַΪ%p\n", i, j, &arr1[i][j]);
	//		}
	//	}
	//	return 0;
	//}