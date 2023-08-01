# C/C++程序的内存开辟

> 参考：b站张鹏伟-p65 



##  内核空间

> 用户代码不能读写



## 1.栈区（向下增长）

> 栈区特点：先使用高地址，再使用低地址

- 局部变量
- 函数的形式参数
- 函数调用也开辟空间



## 2.堆区（向上增长）

- 动态内存分配
- malloc/free
- realloc
- calloc



## 3.静态区/数据段

> 计算机语言领域叫静态区，操作系统领域叫数据段

- 全局变量
- 静态变量（static修饰的全局变量或局部变量）





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



![](https://lqr-1317479009.cos.ap-shanghai.myqcloud.com/C%E7%A8%8B%E5%BA%8F%E5%86%85%E5%AD%98%E6%A0%88%E5%8C%BA.jpg)



## 代码段

- 可执行代码/存放函数体的二进制代码
- 只读常量（例如：常量字符串）





![](https://lqr-1317479009.cos.ap-shanghai.myqcloud.com/C%E7%A8%8B%E5%BA%8F%E5%86%85%E5%AD%98%E7%9A%84%E5%BC%80%E8%BE%9F.jpg)