#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//Initpeople�����Ķ���
void Initpeople(struct Infoarr* ps)
{
	memset(ps, 0, sizeof(ps->data));
	ps->size = 0;
}

//Add�����Ķ���
void Add(struct Infoarr* ps)
{
	if (MAX == ps->size)
	{
		printf("ͨѶ¼�������޷����");
	}
	else
	{
		printf("���������֣�");
		scanf("%s",ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		(ps->size)++;
		printf("��ӳɹ�\n");
	}

}

//Show�����Ķ���
void Show(const struct Infoarr* ps)
{
	if (ps->size == 0)
	{
		printf("��ǰ�޼�¼");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-10s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5d\t%-4s\t%-10s\t%-12s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].addr,
				ps->data[i].tele);
		}
	}
	
}