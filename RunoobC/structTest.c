#include <stdio.h>

int main() {
    typedef struct 
    {
        int age;
        float score;
    }StructName;

    StructName inst = {24, 114.514};

    StructName *p = &inst;

    printf("%d\n", p->age);
    printf("%f\n", (*p).score);
    
    return 0;
}