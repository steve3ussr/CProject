#include <stdio.h>


int main() {
    int a_num, res;
    printf("enter an int... ");
    res = scanf("%d", &a_num);
    printf("\nthe int you inputted is %d\n", a_num);
    printf("res = %d", res);

    return 0;
}