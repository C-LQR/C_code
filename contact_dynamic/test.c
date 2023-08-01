#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("********************************************\n");
	printf("**********  1.add        2.del    **********\n");
	printf("**********  3.search     4.modify **********\n");
	printf("**********  5.show       6.sort   **********\n");
	printf("**********  0.exit                **********\n");
	printf("********************************************\n");
}

int main()
{
	//创建通讯录
	struct Contact con;//con就是通讯录，包含struct PeoInfo指针，size变量以及capacity变量
	//初始化通讯录，初始化成功返回1，失败返回0
	while (!InitContact(&con))
	{
		printf("初始化通讯录失败！\n");
	}
	printf("初始化通讯录成功！\n");
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			//SortContact(&con);
			break;
		case 0:
			DestoryContact(&con);
			printf("程序退出");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}