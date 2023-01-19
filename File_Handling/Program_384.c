// accept file name from user and open that file // create file programatically 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // f for file and cntl for control. header
int OpenFile(char Name[])
{
    int fd = 0;

    fd = open(Name, O_RDWR);

    return fd;
}
int main()
{
    char Fname[20]; // for file name
    int fd = 0; // file descriptor

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = OpenFile(Fname);

    if(fd == -1)
    {
        printf("Unable to open file.");
    }
    else
    {
        printf("File is succesfully open with FD  : %d",fd);
    }

    return 0;
}