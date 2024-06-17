#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
///一，库函数///

//1.strcpy//拷贝字符串
	//int main()
	//{
	//	char arr1[] = "bit";
	//	char arr2[20] = "#########";
	//	strcpy(arr2, arr1);
	//	printf("%s\n", arr2);//打印出来是bit是因为在字符串中\0为计算长度和打印的结束标志
	//	return 0;
	//}
//2.memset//
//memory-内存-set-设置//
       //void* memset(void* ptr, int value, size_t num);//			说明：（1）int value 可以为字符，因为在执行程序时，字符会转化为对应的ascll码值
	//int main()												  (2)基本只能用来设置字符数组，很难设置整数数值
	//															 （3）最好直接用字符，因为函数使用该数值的无符号字符转换来填充内存块，不直接用所给数值来填充
	//{
	//	char arr1[] = "hello world";
	//	memset(arr1, '*', 5);
	//	printf("%s\n", arr1);
	//	return 0;
	//}