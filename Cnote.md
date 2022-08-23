# TODO

- [ ] C 存储类
- [ ] 位运算符
- [ ] `size_t`
- [ ] [指针数组的例子](https://www.runoob.com/cprogramming/c-array-of-pointers.html)
- [ ] 





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
> 宏定义是字符替换，没有数据类型的区别，同时这种替换没有类型安全检查，可能产生边际效应等错误；
>
> const常量是常量的声明，有类型区别，需要在编译阶段进行类型检查
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

`&`返回地址， `*`返回地址对应的值。

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

## While

``` c
while (cond) {
    statement;
}
```

## For

``` c
for([init];cond;[inc]) {
    statement;
}
```

- `init`部分可以留空（在循环之前就定义），这里允许初始化一个变量用于控制；
- `cond`作为语句执行的条件；
- `inc`是循环控制变量的操作，可以为空；
- **条件也可以置空，此时将默认为True；**

![](https://www.runoob.com/wp-content/uploads/2014/09/69978E61-0BA5-4D66-A115-D3AD15B16F47.jpg)

## Do-While

> 循环控制在最后，所以语句至少执行一次；

``` c
do {
    statement
} while(cond);

```

![](https://www.runoob.com/wp-content/uploads/2014/09/B2FE1EC7-6477-439B-8F50-82D537673799.jpg)

## Break， Continue

`pass`

# C 函数

> 两种调用：**传值调用**和**引用调用**。

## 函数签名

函数名和参数列表一起构成了函数签名。意味着可以出现参数列表不同但是函数名相同的函数。

## 宏定义简单函数

可用预处理命令`#define`定义简单函数

``` c
#define  MAX_3(a, b, c) ( ((a > b ? a : b) > c) ? (a > b ? a : b) : c )
#define  MIN_3(a, b, c) ( ((a < b ? a : b) < c) ? (a < b ? a : b) : c )
#define  MAX_2(x, y)  ( x> y ? x : y )
#define  MIN_2(x, y)  ( x< y ? x : y )
#define  ARR_SIZE(a)  ( sizeof( (a) ) / sizeof( (a[0]) ) )
#define  MULTIPLE(m, n) ( (m%n == 0)?0:1 )
#define  AVE_3(a, b, c) (a+b+c)/3
#define  SUM_3(a, b, c) a+b+c
#define  SWAP(a, b){int t= a;a=b;b=t;}
```



## 调用，传参

``` c
int max2int(int a, int b) 
	/* int res = max2int(int 1, int 4); */
{
    int res = a >= b ? a : b;
    return res;
}

void swap2int(int *p, int *q)
    /* 
     int a = 1;
     int b = 4;
     swap2int(&a, &b); 
     */
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}
```

## 声明

声明时，参数名称可以没有，但是参数类型要有。

`int max(int, int)`

## 内部函数，外部函数

`static`前缀关键字声明该函数为内部函数（又称静态函数），作用域限定为本文件。

`extern`前缀关键字声明该函数为外部函数，可被其他文件调用。



## 内联函数

对于一些小的频繁调用的简单函数，可以加上`inline`前缀，这样编译时不会将其作为一个函数，而是将其插入到主函数中代替函数调用语句。

简单：

1. 不能递归；
2. 没有循环、switch等复杂结构，一般就几行；

 `inline`只是建议，不代表编译器一定会这么做。

写法一：

```c
/* .h */
int max2int(int a, int b)
{
    int res = a >= b ? a : b;
    return res;
}


/* .c */
#include ".h"
void main()
{
    extern inline int max2int(int, int);
    printf("max2int res = %d\n", max2int(x, y));
}
```

写法二（*头文件里不加extern会编译不成功，原理不清楚*）：

``` c
/* .h */
extern inline int max2int(int a, int b)
{
    int res = a >= b ? a : b;
    return res;
}


/* .c */
#include ".h"
void main()
{
    int max2int(int, int);
    printf("max2int res = %d\n", max2int(x, y));
}
```

## mian的完整写法

``` c
int mian(int argc, char *argv[], [char **env])
{
    return 0;
}
```

主函数可以返回void，但如果有些情况下依赖于进程状态码返回值判断执行是否正常，假如有子进程父进程的话。

- `argc`：argument counter
- `argv`：argument vector
- `argv[0]`对应程序的路径全名；
- `argv[i]`对应字符串；



# C 作用域







# C 数组

> 见C++数组





# C 枚举





# C 指针

## 例子

`int *a;`说明`*a`是int，进而反推出a是指针；

`int* a`在编译器眼里还是一样，但对人来说比较直观：a是一个int指针；

`int *a, *b;`这是两个指针；

`int *a, b;`一个指针，一个变量；

`int* a, b;`一个指针，一个变量（编译器的眼里和上一行没区别）；

`int *a[3];`：

- `[]`优先级高；
- 有一个数组长度为3；
- 其中每个元素都是`int *obj`；

`int (*a)[3];`

- `()`优先级高；
- `(*a)`是一个3个元素的整型数组；
- a是数组指针；

## Pointer Intro

``` c
#include <stdio.h>

int main()
{
    int a = 114514;
    int *p = &a;
    printf("a的地址是: %p\n", &a);
    printf("指针p的地址是: %p\n", &p);
    printf("指针p指向的地址是是: %p\n", p);
    printf("指针p指向的地址里存放的内容是: %d\n", *p);
    return 0;
}

a的地址是: 000000000061FE1C
指针p的地址是: 000000000061FE10
指针p指向的地址是是: 000000000061FE1C
指针p指向的地址里存放的内容是: 114514
```



![](https://www.runoob.com/wp-content/uploads/2014/09/c-pointer.png)

## Pointer Declaration

`type *pointerName`

指针的类型，和指针内容地址对应的变量类型应该一样，整型指针只能指向整型变量。

## NULL Pointer

在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为**空**指针。

>  NULL 指针是一个定义在标准库中的值为零的常量。

`int *p = NULL;`此时p存放的地址是`0x0`。

> 在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
>
> 如需检查一个空指针，您可以使用 if 语句，如下所示：
>
> `if(p)`True代表非空；
>
> `if(!p)`True代表空指针。

## 指针的运算

可以用四种：`++, --, +, -`

这里的加减指的不是内存地址单纯加减1，而是和指针类型相关。`int`占4位，所以会+4；`char`占1位，所以会+1。

递增递减，指向的是下一个元素的存储单元：这在访问数组时很常用。

``` c
void vectorPointer()
{
    int cnt, *ptr, vec[] = {11, 45, 14};
    ptr = vec;
    for(cnt=0; cnt<3; cnt++, ptr++)
    {
        printf("第 %d 个数字是 %d, 地址是 %p\n", cnt+1, *ptr, ptr); 
    }
}
```

**指针自增写在`printf`里有可能会越界：在某些编译环境下，printf运算顺序从右到左。**

``` c
int ffg = 0;
printf("ffg is: %d\n", ffg, ffg++); /* 1 */
-----------------------------------------------
int ffg = 0;
printf("ffg is: %d\n", ffg++); /* 0 */
```

## 指针的比较

可通过比较内存值，避免越界。

```c
int cnt, *ptr, vec[] = {11, 45, 14};
for(cnt=1, ptr=vec;ptr <= &vec[2] ; cnt++, ptr++)
{
    printf("第 %d 个数字是 %d, 地址是 %p\n", cnt, *ptr, ptr); 
}
```

## 指针数组

`int var[] = {10, 20, 30}`

`int *var[] = {10, 20}`

单纯声明：`type *definer[MAX];`——这个数组有MAX个整型指针，每个元素都是指向int的指针。

``` c
void main()
{
    int v[] = {11, 45, 14};
    int *pv[3];

    for(int i=0; i<3; i++)
    {
        pv[i] = &v[i];
        printf("第%d个元素地址是%p, 内容是%d\n", i, pv[i], *pv[i]);
    }
}
```

> - 指针数组：`int *vec[]`
> - 数组指针：`int (*vec)[]`
>
> > 圆括号比方括号优先级要高，所以在指针数组中，首先认为这是个数组，每个成员是指针；在数组指针中，先认为这是个整型指针，然后才认为这个指针指向数组。



## 指针的指针

必须通过`int **var`声明；

## 传指针给函数

只要函数声明参数为指针就行：`returnType funcName(argType *argName);`

``` c
#include <stdio.h>

void add1(int *i)
{
    *i += 1;
}

int main()
{
    int a = 114514;
    printf("a = %d\n", a);

    add1(&a);
    printf("a = %d\n", a);

    return 0;
}
```

## 从函数返回指针

函数声明：`returnType * funcName(args);`

**C 语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量。**

> 因为局部变量是存储在内存的栈区内，当函数调用结束后，局部变量所占的内存地址便被释放了，因此当其函数执行完毕后，函数内的变量便不再拥有那个内存地址，所以不能返回其指针。
>
> 除非将其变量定义为 static 变量，static 变量的值存放在内存中的静态数据区，不会随着函数执行的结束而被清除，故能返回其地址。











# C 函数指针，回调函数







# C 字符串





# C 结构体

结构体像是没有方法，只有属性的类。

## 声明结构

``` c
struct structName {
    type attr1;
    type attr2;
} [OPTIONAL: instName];
```

通过`instName.attr`访问



结构体可以实现含有自己类型**指针**的结构成员：

``` c
struct Node {
    int data;
    struct Node* next;
};
```

如果两个结构体互相包含，则需要对其中一个结构体进行不完整声明，如下所示：

``` c
struct B;    //对结构体B进行不完整声明
 
//结构体A中包含指向结构体B的指针
struct A
{
    struct B *partner;
    //other members;
};
 
//结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
struct B
{
    struct A *partner;
    //other members;
};
```

> 结构体不是鸭子类型的。即使两个结构体有相同的成员，但结构体标识符不一样也不能通用。

## 定义实例

`struct structName instName;`用来定义——但是要多写一个`struct`关键字；

所以可以提前定义好：

``` c
typedef struct {
    //
} TYPEMNAME;
TYPENAME inst;
```

``` c
TYPENAME inst = {var1, var2 , ..., varn};
```

