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



### 正确情况：

每个源文件顶部加入代码：`#define _CRT_SECURE_NO_WARNINGS 1`

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



> 附：scanf函数和getchar函数的区别（参考：B站张鹏伟-7.分支与循环（2））





## 2.设置控制台

- 右击项目文件，点击**属性**
- 点击**链接器**
- 点击**系统**
- 将子系统改为**控制台**