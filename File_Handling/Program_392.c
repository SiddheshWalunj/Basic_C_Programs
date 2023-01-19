// accept file name from user and display file size
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
    char Fname[20]; // for file name
    int fd = 0, Length = 0; // file descriptor
    char Data[100];
    int size = 0;

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    
    if(fd == -1)
    {
        printf("unable to open file");
        return -1;
    }

    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        size = size + Length;
    }

    printf("Size of the file is %d bytes",size);

    close(fd);
    return 0;
}

/*
    0 standard input device - keyboard
    1 standard output device - console
    2 standard error device - console
*/