/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *
    *   *
    *   *   *
    *   *   *   *
    *   *   *   
    *   *
    *

*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
 
    //    1       2        3
    for(i = 1; i<= iRow -1; i++)   // Outer
    {   //    1         2       3 
        for(j = 1; j <= iCol; j++)  // Inner
        {
            if(j<=i)  // Diagonal with loawer triangle
            {   
                printf("*\t");
            }
        }
        printf("\n");
    }
    //    1       2        3
    for(i = iRow; i>= 1; i--)   // Outer    // 4    3   2   1   
    {  //    1         2       3 
        for(j = 1; j <= i; j++)  // Inner
        { 
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}


// Sunday   21 May     7.30 am to 11.30 am
// Monday   22 May     6.30 pm to 10.30 pm
// Tuesday  23 May     6.30 pm to 10.30 pm