#define _CRT_SECURE_NO_WARNINGS 1

#define DEFUALT_SZ 3
//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 30
#define MAX_TELE 12

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	struct PeoInfo* data;//�ṹ��ָ��
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��¼ͨѶ¼��������
};

//��ʼ����������
int InitContact(struct Contact* ps);

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

//�ͷ��ڴ溯������
void DestoryContact(struct Contact* ps);