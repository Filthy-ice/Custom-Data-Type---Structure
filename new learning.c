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

//struct S
//{
//	double a;
//	char b;
//	int c;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}



typedef struct Stu
{
	char name[20];
	char sex[10];
	char tele[12];
	int age;
}S;
//传递数组
//void print(S s)
//{
//	printf("%s\n", s.sex);
//}
//
//int main()
//{
//	S s = { "骚冰","男","15384356698",70 };
//	print(s);
//	return 0;
//}

//指针传参
//void print(S* s)
//{
//	printf("%s\n", s->tele);
//	return 0;
//}
//
//int main()
//{
//	S s1 = { "食屎","娚","15384356684",68 };
//	print(&s1);
//	return 0;
//}

//struct S
//{
//	int _a : 5;
//	int _b : 6;
//	int _c : 15;
//	int _d : 6;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s;
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}