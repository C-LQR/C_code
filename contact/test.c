#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h> 
#include "contact.h"
void menu()
{
	printf("********************************************\n");
	printf("**********  1.add        2.del    **********\n");
	printf("**********  3.search     4.modify **********\n");
	printf("**********  5.show       0.�˳�   **********\n");
	printf("********************************************\n");
}

int main()
{
	//�����ṹ��
	struct Infoarr a;
	//��ʼ���ṹ��
	Initpeople(&a);

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�����˳�");
			break;
		default:
			break;
		}
	} 
	while (input);
}