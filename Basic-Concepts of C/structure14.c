#include<stdio.h>

#pragma pack(2)
struct Demo
{
    int no;
    char ch;
    float f;
    int i;
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}