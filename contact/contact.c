#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//Initpeople函数的定义
void Initpeople(struct Infoarr* ps)
{
	memset(ps, 0, sizeof(ps->data));
	ps->size = 0;
}

//Add函数的定义
void Add(struct Infoarr* ps)
{
	if (MAX == ps->size)
	{
		printf("通讯录已满，无法添加");
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

//Show函数的定义
void Show(const struct Infoarr* ps)
{
	if (ps->size == 0)
	{
		printf("当前无记录");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-10s\t%-12s\n", "名字", "年龄", "性别", "地址", "电话");
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