#include<stdio.h>
//��һ��ָ�����͹涨�ı�Ҫ��//
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
	//	//*pc = 0;  //ָ�����;�����ָ����н����õ�ʱ���ܹ����ʵĿռ�Ĵ�С
	//				//	int*p  *p�ܹ�����4���ֽ�
	//				//char* p* p�ܹ�����1���ֽ�
	//				//double* p* p�ܹ�����8���ֽ�
	//	printf("%p\n", pa);
	//	printf("%p\n", pa);
	//	return 0;
	//}
//ָ�����Ͳ�ͬ������������//
	//int main()
	//{
	//	int a = 0x11223344;
	//	int* pa = &a;
	//	char* pc = &a;
	//	printf("%p\n", pa);
	//	printf("%p\n", pa+1);

	//	printf("%p\n", pc);//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
	//						//int*p p+1-->4  char*p+1-->1 double*p-->8
	//	printf("%p\n", pc+1);
	//	return 0;
	//}
	//
	//int main()
	//{
	//	int arr1[10] = { 0 };
	//	int *p=arr1;//������-��Ԫ�ص�ַ
	//	//char *p=arr1;ָ�����Ͳ�ͬ��������ͬ�������޷���ɱ����������ı�
	//	for (int i = 0; i < 10; i++)
	//	{
	//		*(p + i) = 1;
	//	}
	//	
	//	return 0;
	//}
//Ұָ��//
	//��1��
	//int main()
	//{
	//	int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ  
	//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
	//	int*oa=NULL;//NULL-������ָ�븳ֵ�ģ�����֪����ֵΪʲôʱ
	//	return 0;
	//}
	//��2��
	//int main()
	//{
	//	
	//		int arr1[10] = { 0 };
	//		int* p = arr1;
	//		for (int i = 0; i < 12; i++)
	//		{
	//			*(p + i) = 1;//Խ�����
	//		}
	//
	//	return 0;
	//}
//��3��ָ��ָ��ռ��ͷ�//
	//int* test()
	//{
	//	int a = 20;//�ֲ�����������ʱ�㱻����
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
	//	for (vp = &values[5]; vp >&values[0];)//*vp--��*--vp������
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
