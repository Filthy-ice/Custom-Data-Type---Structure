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

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s;
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}



//枚举
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sum
//};
//
//enum Sex
//{
//	//枚举的可能取值
//	Male,
//	Female,
//	Secret
//};
//
//int main()
//{
//	enum Day s = Mon;
//	enum Sex x = Male;
//	return 0;
//}

//enum Color
//{
//	RED = 1,
//	GREEN=2,
//	BLUE=4
//};
//
//int main()
//{
//	enum Color clr = GREEN;
//	clr = 5;
//	printf("%d\n", clr);
//	return 0;
//}//虽然C源代码里面能运行，但是改成更严谨的C++就会提示出错，和#define定义的宏常量一样，enum中的常量也相当于被const修饰的，常量无法更改；




//判断当前计算机的大小端存储问题

int check_sys()
{
	union Un
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}

int main()
{
	int a = 1;
	//如果是小端存储那么 01 00 00 00，那么取地址强制转换字节解引用，那么输出的是1，如果大端，那么是0
	//平时的写法
	//if (1 == *(char*)&a)
	//{
	//	printf("机器是小端存储\n");
	//}
	//else
	//{
	//	printf("机器是大端存储\n");
	//}
	//联合体写法
	int ret = check_sys();
	if (1 == *(char*)&a)
    {
	    printf("机器是小端存储\n");
    }
    else
    {
	    printf("机器是大端存储\n");
    }
	return 0;
}