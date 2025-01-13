#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10)+iDigit;
        iNo = iNo / 10;
    }
    return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse number is %d \n",iRet);

    return 0;
}
