/*

1: Open existing file

int open(char *File_name, int Mode);

File_name : Name of file that you want to open
Mode : Mode in which you want to open the file
    O_RDONLY    Read mode
    O_WRONLY    Write mode
    O_RDWR      Read + Write mode

Return value : integer which indicates the index ie File descriptor

Succes : Return value >= 0 (Always starts from 3)
Filrure : return value is -1

2: Close the file

void close(int fd);

fd : Its a return value of open system call

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;

    fd = open("Demo.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}