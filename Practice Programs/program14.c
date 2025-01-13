
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");      // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statement : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}