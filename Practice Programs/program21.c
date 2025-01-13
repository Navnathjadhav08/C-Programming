#include<stdio.h>


void DisplayFactors(int iNo)
{
    int iCnt = 0;
    //      1           2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt); // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}