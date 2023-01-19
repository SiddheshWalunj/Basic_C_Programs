#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // f for file and cntl for control. header
// create file programatically 
int CreateFile(char Name[])
{
    int fd = 0;
    fd = creat(Name,0777);

    return fd;
}

int main()
{
    char Fname[20]; // for file name
    int fd = 0; // file descriptor

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname);

    fd = CreateFile(Fname);

    if(fd == -1)
    {
        printf("Unable to create file.");
    }
    else
    {
        printf("File is succesfully created with FD  : %d",fd);
    }

    return 0;
}