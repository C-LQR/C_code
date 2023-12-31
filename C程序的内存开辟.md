# C/C++程序的内存开辟

> 参考：b站张鹏伟-p65 
>
> 参考：王道2023年操作系统考研复习指导-p49



##  1.内核空间

> 又叫，系统内存
>
> 用户代码不能读写  
>
> 一个进程的PCB（进程控制块）



## 2.用户空间

### 2.1 栈区（向下增长）

> 栈区特点：先使用高地址，再使用低地址
>
> ​					从主存选择一片地方作栈区时，是从高地址向低地址扩增

- 局部变量
- 函数的形式参数
- 函数调用也开辟空间



### 2.2 堆区（向上增长）

- 动态内存分配
- malloc/free
- realloc
- calloc



### 2.3 静态区/数据段

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



### 2.4 代码段

- 可执行代码/存放函数体的二进制代码
- 只读常量（例如：常量字符串）





![](https://lqr-1317479009.cos.ap-shanghai.myqcloud.com/C%E7%A8%8B%E5%BA%8F%E5%86%85%E5%AD%98%E7%9A%84%E5%BC%80%E8%BE%9F.jpg) 





## 例题

若一个 进程实体由PCB、共享正文段、数据堆段和数据栈段组成，请指出下列C语言程序中的内容以及相关数据结构各位于哪一段中。

1. 全局赋值变量		**正文段**
2. 未赋值的局部变量		**栈段**
3. 函数调用实参传递值		**栈段**
4. 用malloc()要求动态分配的存储区		**堆段**
5. 常量值（如，1995、“string”）		**正文段**
6. 进程的优先级		**PCB**

> 本例题出自于王道，本题中的一些专有名称与上文的专有名称有差别
>
> 
>
> 共享正文段包括：数据段 + 代码段，	存放代码、常量、全局变量、静态变量
>
> 数据堆段是指：堆区，							存放动态分配的存储区
>
> 数据栈段是指：栈区，							存放局部变量、实参传递值 