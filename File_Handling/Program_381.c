#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>// file control. header

int main()
{
    char Fname[20];// for file name
    int fd = 0; // file descriptor

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file.");
    }
    else
    {
        printf("File is succesfully created with FD  %d",fd);
    }

    return 0;
}