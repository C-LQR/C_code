#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��ʼ�������Ķ���
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

//��Ӻ����Ķ���
void AddContact(struct Contact* ps)
{
	if (MAX == ps->size)
	{
		printf("ͨѶ¼�������޷����\n");
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

//��ӡ�����Ķ���
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].addr,
				ps->data[i].tele);
		}
	}
	
}