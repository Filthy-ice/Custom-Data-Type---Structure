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
//	S s1 = { "ʷ�Ƴ�",22,"13323331284" };
//	printf("���֣�%s\n", s1.name);
//	printf("���䣺%d\n", s1.age);
//	printf("�绰��%s\n", s1.tele);
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
//	//sizeof(struct Node);//err��ѭ��
//	return 0;
//}


//�ṹ���ڴ�������⡣
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