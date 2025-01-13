#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr,Brr);    // strcmpX(100,200);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    else
    {
        printf("Both the strings are diffrent\n");
    }

    return 0;
}