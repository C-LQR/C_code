#define _CRT_SECURE_NO_WARNINGS 1

//���1��ֱ�Ӽ�extern����
#include <stdio.h>

extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}

//���2��
//#include <stdio.h>
//#include "add.c"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//���3��
//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}