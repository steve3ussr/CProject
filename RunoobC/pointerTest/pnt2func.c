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
