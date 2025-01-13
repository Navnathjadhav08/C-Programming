#include<stdio.h>

int strlenDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    iRet = strlenDigitsX(Arr);    // strlenX(100);

    printf("Number of digits are : %d\n",iRet);
    return 0;
}