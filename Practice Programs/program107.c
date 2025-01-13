// Input :  5
// Output : 1   2   3   4   5   5   4   3   2   1   

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1                   2                3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);      // 4
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);      // 4
    }
    
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}




//          1   2   3   4   5   5   4   3   2   1