#include<stdio.h>

int MaximumDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

   iRet = MaximumDigit(iValue);

    printf("Largest digit is %d\n",iRet);

    return 0;
}
