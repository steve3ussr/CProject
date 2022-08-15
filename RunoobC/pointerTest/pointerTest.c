#include <stdio.h>

void basicPointer(void)
{
    int a = 114514;
    printf("a占用的字节大小是: %d \n", sizeof(a));
    int *p = &a;
    printf("a的地址是: %p\n", &a);
    printf("指针p的地址是: %p\n", &p);
    printf("指针p指向的地址是是: %p\n", p);
    printf("指针p指向的地址里存放的内容是: %d\n", *p);
}

void vectorPointer()
{
    int cnt, *ptr, vec[] = {11, 45, 14};
    ptr = vec;
    for(cnt=0; cnt<3; cnt++)
    {
        printf("第 %d 个数字是 %d, 地址是 %p\n", cnt+1, *(ptr-1), ptr++); 
    }
}

void vectorPointerCompare()
{
    int cnt, *ptr, vec[] = {11, 45, 14};
    for(cnt=1, ptr=vec;ptr <= &vec[2] ; cnt++, ptr++)
    {
        printf("第 %d 个数字是 %d, 地址是 %p\n", cnt, *ptr, ptr); 
    }
}

void printfTest()
{
    int ffg = 0;
    printf("ffg is: %d, %d\n", ffg, ffg++);
    ffg = 0;
    printf("ffg is: %d\n", ++ffg, ffg=5, ffg=10);
}

void pointerVector()
{
    int var[] = {11, 45, 14};
    int *varP[3];
    for(int i=0; i<3; i++)
    {
        *varP[i] = &var[i];
    }


}

int main()
{

    pointerVector();
    return 0;
}