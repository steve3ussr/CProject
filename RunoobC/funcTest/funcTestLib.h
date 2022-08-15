int add2int(int a, int b)
{
    int res;
    res = a + b;
    return res;
}

extern inline int max2int(int a, int b)
{
    int res = a >= b ? a : b;
    return res;
}

void swap2int(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}