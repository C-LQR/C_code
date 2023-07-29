#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h> 
#include "contact.h"
void menu()
{
	printf("********************************************\n");
	printf("**********  1.add        2.del    **********\n");
	printf("**********  3.search     4.modify **********\n");
	printf("**********  5.show       0.退出   **********\n");
	printf("********************************************\n");
}

int main()
{
	//创建结构体
	struct Infoarr a;
	//初始化结构体
	Initpeople(&a);

	int input = 0;
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			Add(&a);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Show(&a);
			break;
		case 0:
			printf("程序退出");
			break;
		default:
			break;
		}
	} 
	while (input);
}