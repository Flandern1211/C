
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	//int main()
	//{
	//	printf("hehe\n");
	//		main();
	//		return 0;
	//}





//將一个数用递归地的方法区分开打印//
	//void print(int x)
	//{
	//	if (x > 9)
	//	{
	//		print(x / 10);
	//
	//	}		/*	1	1%10
	//				2	12%10
	//				3	123%10
	//				4	1234%10*/
	//	printf("%d ", x % 10);
	//}
	//
	//int main()
	//{
	//	unsigned int num = 0;
	//	scanf("%d", &num);
	//	print(num);
	//	return 0;
	//
	//}





//(2)查询字符串长度//
	//int my_strlen(char* str)
	//{	//(1)迭代//
	/*int count = 0;
	while (*str != '\0')
	{
		str++;
			count++;

	}
	return count;*/
	//（2）递归//
	/*if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;*/
	//	}

	//int main()
	//{
	//	int len = 0;
	//	char arr[] = "bitsdf";
	//		len = my_strlen(arr);//arr是数组，数组传参，传的不是整个数组，而是第一个元素的地址
	//		printf("字符串长度为%d", len);
	//		return 0;
	//}