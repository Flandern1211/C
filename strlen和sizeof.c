//1.strlen 是求字符串长度的-只针对字符串求长度-库函数-引头文件
//2.sizeof 计算变量，数组，类型的大小-单位是字节-操作符
//（2）sizeof和strlen的使用//
	//1.//int main()
	//{
	//	int arr4[] = { 1,23,4,5,6,7 };
	//	char arr5[] = "abcdef";
	//	printf("%d\n", sizeof(arr4));
	//	printf("arr4中有几个元素%d\n", sizeof(arr4) / sizeof(arr4[0]));
	//	printf("%d\n", sizeof(arr5));//7  //一个字符占一个字节,\0算终止字符，也占一个字节  
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