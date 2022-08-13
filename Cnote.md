# TODO

- [ ] C 存储类
- [ ] 位运算符
- [ ] switch test





# C Hello World

``` c
#include <stdio.h>

void main() {
    printf("hello world\n");
}
```

1. 预处理器指令，告诉编译器在编译之前要有`stdio.h`文件；
2. 程序必须包含主函数；
3. `printf()`是一个包含在`stdio.h` 的函数；

# C 基本语法

## 注释

`/*  */`单行注释

``` c
/* 
 123 多
 123 行
 123 注
 123 释
 */ 
```

## Token

> 和编译相关，可以理解为单词。

C 程序由各种令牌组成，令牌可以是关键字、标识符、常量、字符串值，或者是一个符号。

### 分号

语句结束符

### 标识符

标识变量、函数、或任何自定义项目的名称。

- 以字母 A-Z 或 a-z 或下划线 _ 开始；后跟零个或多个字母、下划线和数字（0-9）
- C 标识符内不允许出现标点字符，比如 @、$ 和 %；
- C 是**区分大小写**的编程语言。因此在 C 中，*Manpower* 和 *manpower* 是两个不同的标识符。

### 关键字

# C 数据类型

| 序号 | 类型与描述                                                   |
| :--- | :----------------------------------------------------------- |
| 1    | **基本类型：** 它们是算术类型，包括两种类型：整数类型和浮点类型。 |
| 2    | **枚举类型：** 它们也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。 |
| 3    | **void 类型：** 类型说明符 *void* 表明没有可用的值。         |
| 4    | **派生类型：** 它们包括：指针类型、数组类型、结构类型、共用体类型和函数类型。 |

`sizeof()`可以获取对象的储存字节大小。







## 整数类型



| 类型           | 存储大小    | 值范围                                               |
| :------------- | :---------- | :--------------------------------------------------- |
| char           | 1 字节      | -128 到 127 或 0 到 255                              |
| unsigned char  | 1 字节      | 0 到 255                                             |
| signed char    | 1 字节      | -128 到 127                                          |
| int            | 2 或 4 字节 | -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647 |
| unsigned int   | 2 或 4 字节 | 0 到 65,535 或 0 到 4,294,967,295                    |
| short          | 2 字节      | -32,768 到 32,767                                    |
| unsigned short | 2 字节      | 0 到 65,535                                          |
| long           | 4 字节      | -2,147,483,648 到 2,147,483,647                      |
| unsigned long  | 4 字节      | 0 到 4,294,967,295                                   |

## 浮点类型

> `#include <float.h>`

| 类型        | 存储大小 | 值范围                 | 精度        |
| :---------- | :------- | :--------------------- | :---------- |
| float       | 4 字节   | 1.2E-38 到 3.4E+38     | 6 位有效位  |
| double      | 8 字节   | 2.3E-308 到 1.7E+308   | 15 位有效位 |
| long double | 16 字节  | 3.4E-4932 到 1.1E+4932 | 19 位有效位 |

## void类型

函数返回值，或者 arg 都可以是void。

# C 变量，定义，声明

| 类型   | 描述                                                         |
| :----- | :----------------------------------------------------------- |
| char   | 通常是一个字节（八位）, 这是一个整数类型。                   |
| int    | 整型，4 个字节，取值范围 -2147483648 到 2147483647。         |
| float  | 单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。![img](https://www.runoob.com/wp-content/uploads/2014/09/v2-749cc641eb4d5dafd085e8c23f8826aa_hd.png) |
| double | 双精度浮点值。双精度是1位符号，11位指数，52位小数。![img](https://www.runoob.com/wp-content/uploads/2014/09/v2-48240f0e1e0dd33ec89100cbe2d30707_hd.png) |
| void   | 表示类型的缺失。                                             |

有效声明变量示范：

``` c
int i, j, k;
int i = 1;
char c, ch;
float f;
double d;
```

- 声明的同时必须加上数据类型；
- 可同时声明多个；
- 可声明的同时初始化赋值——不然值就是`NULL`；
- `extern int a`这种只是声明了一个变量名，没分配实际内存。

---

定义和声明：

1. **定义（定义型声明, defining declaration）：**所谓定义就是（编译器）创建一个对象，为这个对象分配一块内存，并给它取上一个名字，这个名字就是就是我们经常所说的变量名或对象名。（对于变量，编译器确定变量的大小，然后在内存中开辟空间来保存其数据；对于函数，编译器会生成代码，这些代码最终也要占用一定的内存）。
2. **声明（引用型声明, referencing declaration）：**声明是仅仅告诉编译器，这个名字（标识符）已经匹配到一块内存上以及“这个函数或变量在某处可找到，它长得什么样子”。
3. **最大区别：定义分配储存空间，声明不分配空间。**
4. 定义包含了声明。`int a=0`声明变量a的存在，并定义他为0
5. 声明不包含定义。`extern int a`声明了一个变量存在， 但是这个变量在外部空间定义；但是具体的定义在编译过程中找；
6. `void func(int a, int b);`声明；函数的声明是对定义函数的返回值类型说明，以通知系统在本函数中所调用的函数是什么类型。
7. `void func(){printf{'qwe'};}`声明并定义；整体是一个完整的函数单元 ，包含函数类型、函数名、形参及形参类型、函数体等。

---

自己写的例子：

`externalSource.h`

``` c
#include <stdio.h>

int add2num(void) {
    extern int x;
    extern int y;
    printf("aFunc result = %d", aFunc());
    return x + y;
}
```

`mainFunc.c`

``` c
#include <stdio.h>
#include "externalSource.h"

int x = 1;
int y = 114513;

int aFunc(void) {
    return 1;
}

void main() {
    /*int add2num();*/
    printf("resoult = %d", add2num());
}
```

# C 常量

> 定义后不能修改。
>
> 用 `#define identifier value`或者`const int a = 1;`
>
> 常量声明时必须定义。
>
> **标识符全大写是个好习惯。**

## 整数常量，进制，类型

前缀：

- `0`：八进制
- `0x`：十六进制

后缀：

- `u, U`：无符号
- `l, L`：long

## 浮点常量

> 可以用两种形式：
>
> - 小数：整数部分、小数点和小数部分；`114.514`
> - 指数：小数点，e或E引入的指数；`114514E-4L`

## 字符常量（'char'），字符串常量（"char"）

注意单引号和双引号。

## 例子

``` c
#include <stdio.h>

void main(void) {
    int a = 1;
    char str[] = {"dejavu"};
    char charQ = 'Q';
    float aFloat = 114514E-2;


    printf("int a = %d\n", a);
    printf("char str[] = %s \n", str);
    printf("char charQ = %c\n", charQ);
    printf("float aFloat = %f\n", aFloat);

}
```

# C 存储类

> 存储类定义 C 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。
>
> - `auto`
> - `register`
> - `static`
> - `extern`







# C 运算符，位运算，指针

## 基本运算符

`c++` 先运算，再自增；`++c` 先自增，再运算

- `C::&& == python::and`
- `C::|| == python or`
- `C::! == python not`

## 位运算符

| p    | q    | p & q | p \| q | p ^ q |
| :--- | :--- | :---- | :----- | :---- |
| 0    | 0    | 0     | 0      | 0     |
| 0    | 1    | 0     | 1      | 1     |
| 1    | 1    | 1     | 1      | 0     |
| 1    | 0    | 0     | 1      | 1     |

| 运算符 | 描述                                                         | 实例                                                         |
| :----- | :----------------------------------------------------------- | :----------------------------------------------------------- |
| &      | 按位与操作，按二进制位进行"与"运算。运算规则：`0&0=0;    0&1=0;     1&0=0;      1&1=1;` | (A & B) 将得到 12，即为 0000 1100                            |
| \|     | 按位或运算符，按二进制位进行"或"运算。运算规则：`0|0=0;    0|1=1;    1|0=1;     1|1=1;` | (A \| B) 将得到 61，即为 0011 1101                           |
| ^      | 异或运算符，按二进制位进行"异或"运算。运算规则：`0^0=0;    0^1=1;    1^0=1;   1^1=0;` | (A ^ B) 将得到 49，即为 0011 0001                            |
| ~      | 取反运算符，按二进制位进行"取反"运算。运算规则：`~1=-2;    ~0=-1;` | (~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。 |
| <<     | 二进制左移运算符。将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。 | A << 2 将得到 240，即为 1111 0000                            |
| >>     | 二进制右移运算符。将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。 | A >> 2 将得到 15，即为 0000 1111                             |

## 赋值运算符

| <<=  | 左移且赋值运算符     | C <<= 2 等同于 C = C << 2 |
| ---- | -------------------- | ------------------------- |
| >>=  | 右移且赋值运算符     | C >>= 2 等同于 C = C >> 2 |
| &=   | 按位与且赋值运算符   | C &= 2 等同于 C = C & 2   |
| ^=   | 按位异或且赋值运算符 | C ^= 2 等同于 C = C ^ 2   |
| \|=  | 按位或且赋值运算符   | C \|= 2 等同于 C = C \| 2 |

## 指针运算符

`&`返回地址， `*`将指针指向变量

## 三元运算符

`condition?:True Statement:False Statement`





# C 判断，if，switch，三元运算符

0和null 都是 False

``` c
if (statement)
{
    True
}
else if 
{
    something
}
else
{
    False
}
```

如果很多`else if`可以用`switch`：

``` c
switch (expression: 常量表达式，必须是一个整型或枚举类型) {
    case 1:
        statement
        break;
    case 2:
        statement
        break;
    default:
        statement
}
```

其中break和default是可选的。如果不加break的话，就会继续。

比如在某个case判定后没有break，还会继续执行default的命令。

---

三元运算符：`expression ? True Statement : False Statement`

# C 循环















# C 函数





# C 作用域







# C 数组





# C 枚举





# C 指针





# C 函数指针，回调函数







# C 字符串





# C 结构体
