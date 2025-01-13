#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[50];
    int fdRead = 0;
    int fdWrite = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s",FileName);
   
    fdRead = open(FileName,O_RDONLY);

    printf("Enter the file name that you want to create\n");
    scanf("%s",FileName);

    fdWrite = creat(FileName,0777);

    while(1)
    {
        iRet = read(fdRead,Arr,sizeof(Arr));     // 10
        if(iRet == 0)
        {
            break;
        }
        write(fdWrite,Arr,iRet);
    }
    
    printf("File copy is succesful\n");
    close(fdRead);
    
    return 0;
}