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
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼������struct PeoInfoָ�룬size�����Լ�capacity����
	//��ʼ��ͨѶ¼����ʼ���ɹ�����1��ʧ�ܷ���0
	while (!InitContact(&con))
	{
		printf("��ʼ��ͨѶ¼ʧ�ܣ�\n");
	}
	printf("��ʼ��ͨѶ¼�ɹ���\n");
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�����˳�");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}