# Visual Studio 2022 正常编译前的参数调节设置

## 1.scanf函数

### 库函数：

<stdio.h>



### 错误情况：

```c
#include <stdio.h>

int main()
{
    int a = 0;
    printf("请输入>");
    scanf("%d",&a);
    printf("a：%d",a);
}
```

![](https://lqr-1317479009.cos.ap-shanghai.myqcloud.com/vs_scanf.PNG)



### 原因：

scanf函数是标准C语言提供的，是不安全的；

scanf_s函数不是标准C语言提供的，只是VS编译器提供的，不被其他编译器识别，因此不具有跨平台性；

除此之外，strlen、strcpy、strcat、strcmp等函数也存在该情况。



### 正确情况：

每个源文件顶部加入代码：`#define _CRT_SECURE_NO_WARNINGS 1` （让编译器忽视该错误即可）

```c
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a = 0;
    printf("请输入>");
    scanf("%d",&a);
    printf("a：%d",a);
}
```

![](https://lqr-1317479009.cos.ap-shanghai.myqcloud.com/vs_scanf2.PNG)



### 如何在文件顶部一劳永逸地添加“#define _CRT_SECURE_NO_WARNINGS 1”：

- 针对VS2022：在VS的安装路径中*C:\Program Files\Microsoft Visual Studio\2022\Community*（默认安装路径），*Common7*->*IDE*->*VC*->*VCprojectItems*，在newc++file.cpp的第一行添加`#define _CRT_SECURE_NO_WARNINGS 1`。（记事本无法保存，通过NotePad++在管理者模式下保存）

  

- 针对VS2019：在项目栏中右击，->**属性**->**C/C++**->**预处理器**->**预处理器定义**->先加上一个分号，再写入_CRT_SECURE_NO_WARNINGS ，点击确认

  

> 附：scanf函数和getchar函数的区别（参考：B站张鹏伟-7.分支与循环（2））





## 2.设置控制台

- 右击项目文件，点击**属性**
- 点击**链接器**
- 点击**系统**
- 将子系统改为**控制台**