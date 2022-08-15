#include <stdio.h>
#include "funcTestLib.h"

void main() 
{
    int x = 1;
    int y = 4;
    int add2int(int, int);
    printf("add2int res = %d\n", add2int(x, y));
    
    int max2int(int, int);
    printf("max2int res = %d\n", max2int(x, y));

    void swap2int(int *, int *);
    printf("pre  swap: x = %d, y = %d\n", x, y);
    swap2int(&x, &y);
    printf("post swap: x = %d, y = %d\n", x, y);
}