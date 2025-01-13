#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("ASCII Table\n");
    
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\n",iCnt,iCnt);
    }

    return 0;
}