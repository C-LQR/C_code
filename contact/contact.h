#define _CRT_SECURE_NO_WARNINGS 1

//#pragma once
#include <string.h>
#include <stdio.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 10
#define MAX_TELE 12

//声明数据项类型
struct Info
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

//声明整体数据类型
struct Infoarr
{
	struct Info data[MAX];
	int size;
};

//初始化
void Initpeople(struct Infoarr* ps);

//添加
void Add(struct Infoarr* ps);

//打印
void Show(const struct Infoarr* ps);


