#include <stdio.h>

int add_two(int x, int y) {
    return x+y;
}

int main() {
    printf("enter 2 int, please\n");
    int a, b, sum;
    scanf("%d%d", &a, &b);
    sum = add_two(a, b);
    printf("sum is: %d", sum);
    return 0;
}