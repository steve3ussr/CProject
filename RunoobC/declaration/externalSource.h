#include <stdio.h>

/*
 extern int a;
 extern int b;
 */

int add2num(void) {
    extern int x;
    extern int y;

    printf("aFunc result = %d", aFunc());
    return x + y;
}