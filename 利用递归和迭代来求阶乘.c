#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int factorial(int x)
//{
		/*（1）迭代
		int z = 1;
		if (x == 0)
		{
			return 0;
		}
		else if (x == 1)
		{
			return 1;
		}
		else
		{
			for (int y = 1; y <= x; y++)
			{
				z = z * y;
			}
			return z;*/
	//}

	/*（2）递归
	if (x==0)
	{
		return 1;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);
	}
}*/

	//int main()
	//{
	//	int num = 0;
	//	scanf("%d", &num);//输入太大的数，整数会溢出
	//	int c = factorial(num);
	//		printf("%d", c);
	//
	//	return 0;
	//
	//}