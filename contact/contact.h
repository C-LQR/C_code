#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 30
#define MAX_TELE 12

#include <stdio.h>
#include <string.h>

//声明数据项类型
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

//声明通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//结构体数组
	int size;//记录当前已经有的元素个数
};

//初始化函数声明
void InitContact(struct Contact* ps);

//添加函数声明
void AddContact(struct Contact* ps);

//打印函数声明
void ShowContact(const struct Contact* ps);


