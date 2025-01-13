#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iCnt = 0, iCount = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s",FileName);
   
    fd = open(FileName,O_RDONLY);

    while(1)
    {
        iRet = read(fd,Arr,sizeof(Arr));     // 10
        if(iRet == 0)
        {
            break;
        }
        for(iCnt = 0; iCnt < iRet ;iCnt++)
        {
            if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') ||(Arr[iCnt] == 'O') || (Arr[iCnt] == 'U')|| (Arr[iCnt] == 'a')|| (Arr[iCnt] == 'e')|| (Arr[iCnt] == 'i')|| (Arr[iCnt] == 'o')|| (Arr[iCnt] == 'u') )
            {
                iCount++;
            }
        }
    }
   
    printf("Number of vowels are : %d\n",iCount);


    close(fd);
    
    return 0;
}