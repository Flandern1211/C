#include<stdio.h>
//һ���ṹ������//
///
//��1��//����һ��ѧ����һЩ����
	//struct Stu
	//{	//��Ա����
	//	char name[20];
	//	short age;
	//	char tele[12];
	//	char sex[5];
	//}s1, s2, s3;//s1,s2,s3�������ṹ��ȫ�ֱ���

//��2�����ýṹ��//
	//typedef struct Stu//ʹ��typedef ����� �ṹ��ʹ��  struct Stu-->Stu
	//{	//��Ա����
	//	char name[20];
	//	short age;
	//	char tele[12];
	//	char sex[5];
	//}Stu;
	//
	//int main()
	//{
	//	struct Stu s = {"����",20,"123123131","male"};//�ֲ�����
	//	Stu s2 = {"����",11,"231231231","femal"};
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