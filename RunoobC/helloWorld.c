#include <stdio.h>

int i = 114514;

void main() {
    extern int i;
    printf("hello %d world\n", i);
}
