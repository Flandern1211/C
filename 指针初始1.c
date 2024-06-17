#include<stdio.h>
//（一）指针类型规定的必要性//
	//int main()
	//{
	//	printf("%d\n", sizeof(int*));
	//	printf("%d\n", sizeof(char*));
	//	printf("%d\n", sizeof(double*));
	//	printf("%d\n", sizeof(short*));
	//	int a = 0x11223344;
	//	int* pa = &a;
	//	//*pa = 0;
	//	//char* pc = &a;
	//	//*pc = 0;  //指针类型决定了指针进行解引用的时候，能够访问的空间的大小
	//				//	int*p  *p能够访问4个字节
	//				//char* p* p能够访问1个字节
	//				//double* p* p能够访问8个字节
	//	printf("%p\n", pa);
	//	printf("%p\n", pa);
	//	return 0;
	//}
//指针类型不同加整数的意义//
	//int main()
	//{
	//	int a = 0x11223344;
	//	int* pa = &a;
	//	char* pc = &a;
	//	printf("%p\n", pa);
	//	printf("%p\n", pa+1);

	//	printf("%p\n", pc);//指针类型决定了：指针走一步走多远（指针的步长）
	//						//int*p p+1-->4  char*p+1-->1 double*p-->8
	//	printf("%p\n", pc+1);
	//	return 0;
	//}
	//
	//int main()
	//{
	//	int arr1[10] = { 0 };
	//	int *p=arr1;//数组名-首元素地址
	//	//char *p=arr1;指针类型不同，步长不同，导致无法完成变量的完整改变
	//	for (int i = 0; i < 10; i++)
	//	{
	//		*(p + i) = 1;
	//	}
	//	
	//	return 0;
	//}
//野指针//
	//（1）
	//int main()
	//{
	//	int a;//局部变量不初始化，默认为随机值  
	//	int* p;//局部的指针变量，就被初始化随机值
	//	int*oa=NULL;//NULL-用来给指针赋值的，当不知道赋值为什么时
	//	return 0;
	//}
	//（2）
	//int main()
	//{
	//	
	//		int arr1[10] = { 0 };
	//		int* p = arr1;
	//		for (int i = 0; i < 12; i++)
	//		{
	//			*(p + i) = 1;//越界访问
	//		}
	//
	//	return 0;
	//}
//（3）指针指向空间释放//
	//int* test()
	//{
	//	int a = 20;//局部变量出函数时便被销毁
	//	return &a;
	//}
	//int main()
	//{
	//	int* p = test();
	//	*p = 10;
	//	return 0;
	//int main()
	//{
	//	float a = 20;
	//
	//	float* vp=&a;
	//	float values[5];
	//	for (vp = &values[5]; vp >&values[0];)//*vp--和*--vp有区别，
	//	{
	//		*--vp = 0;
	//	}
	//	
	//	for (int i = 0; i < 5; ++i) {
	//		printf("values[%d] = %f\n", i, values[i]);
	//	}
	//
	//	return 0;
	//}
