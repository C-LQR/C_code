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
	struct PeoInfo* data;//结构体指针
	int size;//记录当前已经有的元素个数
	int capacity;//记录通讯录的总容量
};

//初始化函数声明
int InitContact(struct Contact* ps);

//添加函数声明
void AddContact(struct Contact* ps);

//打印函数声明
void ShowContact(const struct Contact* ps);

//删除函数声明
void DelContact(struct Contact* ps);

//查找函数声明
void SearchContact(const struct Contact* ps);

//修改函数声明
void ModifyContact(struct Contact* ps);

//排序函数声明
void SortContact(struct Contact* ps);

//释放内存函数声明
void DestoryContact(struct Contact* ps);