#define _CRT_SECURE_NO_WARNINGS 1

//#pragma once
#include <string.h>
#include <stdio.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 10
#define MAX_TELE 12

//��������������
struct Info
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

//����������������
struct Infoarr
{
	struct Info data[MAX];
	int size;
};

//��ʼ��
void Initpeople(struct Infoarr* ps);

//���
void Add(struct Infoarr* ps);

//��ӡ
void Show(const struct Infoarr* ps);


