#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 30
#define MAX_TELE 12

#include <stdio.h>
#include <string.h>

//��������������
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

//����ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//�ṹ������
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��ʼ����������
void InitContact(struct Contact* ps);

//��Ӻ�������
void AddContact(struct Contact* ps);

//��ӡ��������
void ShowContact(const struct Contact* ps);

//ɾ����������
void DelContact(struct Contact* ps);

//���Һ�������
void SearchContact(const struct Contact* ps);

//�޸ĺ�������
void ModifyContact(struct Contact* ps);

//����������
void SortContact(struct Contact* ps);