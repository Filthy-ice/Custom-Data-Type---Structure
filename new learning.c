#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef struct stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//}S;
//
//int main()
//{
//	S s1 = { "史浩驰",22,"13323331284" };
//	printf("名字：%s\n", s1.name);
//	printf("年龄：%d\n", s1.age);
//	printf("电话：%s\n", s1.tele);
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node n;
//};
//
//int main()
//{
//	//sizeof(struct Node);//err死循环
//	return 0;
//}


//结构体内存对齐问题。
//struct stu
//{
//	char a;
//	int b;
//	char c;
//};
//
//struct teach
//{
//	char a;
//	char c;
//	int b;
//};
//
//int main()
//{
//	struct stu S = { 0 };
//	struct teach T = { 0 };
//	printf("%d\n", sizeof(S));
//	printf("%d\n", sizeof(T));
//	return 0;
//}

struct S
{
	double a;
	char b;
	int c;
};

int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}