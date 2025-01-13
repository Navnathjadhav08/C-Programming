#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    ULONG int iResult = 1;

    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }
    
    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);           // 2
    printf("Enter power : \n");
    scanf("%d",&iValue2);           // 5

    iRet = CalculatePower(iValue1,iValue2);

    printf("Reuslt is : %d\n",iRet);

    return 0;
}

/*
Base = 2;
Power = 5;

Result = 2 * 2 * 2 * 2 * 2;

Result = 1;

Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;











iSum = 4 + 6 + 3 + 1 + 2
iSum = 0;

iSum = iSum + 4;
iSum = iSum + 6;
iSum = iSum + 3;
iSum = iSum + 1;
iSum = iSum + 2;

iSum contains 16









*/