#include<stdio.h>

int CountChar(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    iRet = CountChar(Arr);    // strlenX(100);

    printf("Number of z are : %d\n",iRet);
    return 0;
}