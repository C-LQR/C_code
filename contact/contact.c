#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化函数的定义
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}

//添加函数的定义
void AddContact(struct Contact* ps)
{
	if (MAX == ps->size)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		(ps->size)++;
		printf("添加成功\n");
	}

}

//打印函数的定义
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "名字", "年龄", "性别", "地址", "电话");
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