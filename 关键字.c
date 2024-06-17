#include<stdio.h>
////1.static//
	//作用：1.修饰局部变量，使其的生命周期变长,作用域没改变
	//		2.修饰全局变量，改变了变量的作用域，让静态的全局变量只能在源文件内部使用，出了源文件便无法使用
	//		3.修饰函数,改变了函数的链接属性，外部链接属性-->内部链接属性(外部无法使用)





	//void test()
	//{
	//	static int a = 1;//a是一个静态变量
	//	a++;
	//	printf("a=%d\n", a);
	//}
	//
	//int main()
	//{
	//	int c=0;
	//	int i = 0;
	//	while (i < 5)
	//	{
	//		test();
	//		i++;
	//	}
	//	//extern-声明外部符号的，可以使用外文件的变量和函数
	//	extern int g_val;
	//	printf("%d\n", g_val);
	//	extern int Add(int,int);
	//	int	sum = Add(i, c);
	//	printf("%d\n", sum);
	//	return 0;
	//}