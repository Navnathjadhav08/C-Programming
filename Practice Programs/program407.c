#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[10];
    int iRet = 0;

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
        write(1,Arr,iRet);
    }
   
    close(fd);
    
    return 0;
}