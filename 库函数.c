#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
///һ���⺯��///

//1.strcpy//�����ַ���
	//int main()
	//{
	//	char arr1[] = "bit";
	//	char arr2[20] = "#########";
	//	strcpy(arr2, arr1);
	//	printf("%s\n", arr2);//��ӡ������bit����Ϊ���ַ�����\0Ϊ���㳤�Ⱥʹ�ӡ�Ľ�����־
	//	return 0;
	//}
//2.memset//
//memory-�ڴ�-set-����//
       //void* memset(void* ptr, int value, size_t num);//			˵������1��int value ����Ϊ�ַ�����Ϊ��ִ�г���ʱ���ַ���ת��Ϊ��Ӧ��ascll��ֵ
	//int main()												  (2)����ֻ�����������ַ����飬��������������ֵ
	//															 ��3�����ֱ�����ַ�����Ϊ����ʹ�ø���ֵ���޷����ַ�ת��������ڴ�飬��ֱ����������ֵ�����
	//{
	//	char arr1[] = "hello world";
	//	memset(arr1, '*', 5);
	//	printf("%s\n", arr1);
	//	return 0;
	//}