#include <stdio.h>

void main(void){
    char *p = "qwrg";
    char strv[] = "htrgeg";
    char (*strp)[];
    strp = &strv;
    printf("%s\n", strp);
    printf("%s\n", p);
}