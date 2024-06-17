#include<stdio.h>
//一。结构体声明//
///
//（1）//描述一个学生，一些数据
	//struct Stu
	//{	//成员变量
	//	char name[20];
	//	short age;
	//	char tele[12];
	//	char sex[5];
	//}s1, s2, s3;//s1,s2,s3是三个结构体全局变量

//（2）简用结构体//
	//typedef struct Stu//使用typedef 简单替代 结构体使用  struct Stu-->Stu
	//{	//成员变量
	//	char name[20];
	//	short age;
	//	char tele[12];
	//	char sex[5];
	//}Stu;
	//
	//int main()
	//{
	//	struct Stu s = {"张三",20,"123123131","male"};//局部变量
	//	Stu s2 = {"旺财",11,"231231231","femal"};
	//	return 0;
//	//}
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
}S;
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello,bit";
	struct T t = { "hehe",{11,'w',"hello,world",3.14},arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%d\n", t.s.d);
	printf("%s\n", t.*pc);
	return 0;
}