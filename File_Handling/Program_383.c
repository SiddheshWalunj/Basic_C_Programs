// accept file name from user and open that file // create file programatically 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // f for file and cntl for control. header

//O_RDONLY - open for reading
//O_WRONLY  - open for writing
//O_RDWR - open for reading and writing

int main()
{
    char Fname[20]; // for file name
    int fd = 0; // file descriptor

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);// read and write

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