#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化函数的定义
//初始化成功返回1，失败返回0
int InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFUALT_SZ * sizeof(struct PeoInfo));//动态内存分配
	if (ps->data != NULL)
	{
		ps->size = 0;//设置通讯录最初只有0个元素
		ps->capacity = DEFUALT_SZ;//设置通讯录初始最大容量为 DEFUALT_SZ
		return 1;
	}
	return 0;
	
}

//添加函数的定义
void AddContact(struct Contact* ps)
{
	if (ps->capacity == ps->size)
	{
		printf("通讯录已满,正在重新分配内存......\n");
		struct PeoInfo* ptr =(struct PeoInfo*)realloc(ps->data, (2 + ps->capacity) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			printf("重新分配内存成功！\n");
			ps->data = ptr;
			ps->capacity += 2;
		}
		else
		{
			printf("重新分配内存失败！\n");
			return;
			
		}
	}
	printf("请输入名字：");
	scanf("%s", ps->data[ps->size].name);
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

//通过名字查找，找到返回对应下标，否则返回0
static int FindByName(const struct Contact* ps ,char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return 0;
}

//删除函数的定义
void DelContact(struct Contact* ps) 
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字：>");
	scanf("%s",name);
	int pos = FindByName(ps,name);
	if (pos == 0)
	{
		printf("通讯录没有此人\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < (ps->size) - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}

		(ps->size)--;
	}
}

//查找函数的定义
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps,name);
	if (pos = 0)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "名字", "年龄", "性别", "地址", "电话");
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].addr,
			ps->data[pos].tele);
	}
	
}

//修改函数的定义
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps,name);
	if (pos = 0)
	{
		printf("通讯录没有此人\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("修改成功\n");
	}
}

//排序函数的定义
void SortContact(struct Contact* ps)
{
	;
}

//释放内存函数的定义
void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}