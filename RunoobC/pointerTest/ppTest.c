#include <stdio.h>
void main()
{
    int i = 114514;
    int *p = &i;
    int **pp = &p;

    printf("i = %d\n", i);
    printf("p = %p\n", p);
    printf("p-content = %d\n", *p);
    printf("pp = %p\n", pp);
    printf("pp-content = %p\n", *pp);
    printf("pp-content-content = %d\n", **pp);
}