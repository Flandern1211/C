
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	//int main()
	//{
	//	printf("hehe\n");
	//		main();
	//		return 0;
	//}





//��һ�����õݹ�صķ������ֿ���ӡ//
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





//(2)��ѯ�ַ�������//
	//int my_strlen(char* str)
	//{	//(1)����//
	/*int count = 0;
	while (*str != '\0')
	{
		str++;
			count++;

	}
	return count;*/
	//��2���ݹ�//
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
	//		len = my_strlen(arr);//arr�����飬���鴫�Σ����Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	//		printf("�ַ�������Ϊ%d", len);
	//		return 0;
	//}