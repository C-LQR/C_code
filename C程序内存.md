# C程序内存

## 1.栈区

- 局部变量
- 函数的形式参数
- 函数调用也开辟空间



## 2.堆区

- 动态内存分配
- malloc/free
- realloc
- calloc



## 3.静态区

- 全局变量
- 静态变量（static修饰）





```c
#include <stdio.h>

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}

int main()
{
	int a = 10;
    int b = 20;
    int ret = 0;
    ret = Add(a, b);
    
    return 0;
}
```



> 函数传参时，参数是需要压栈的。如果传递一个结构体对象时，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。
>
> 所以这是结构体传参时，要传结构体的地址的原因。