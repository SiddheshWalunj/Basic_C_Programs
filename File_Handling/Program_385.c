// accept file name from user and open that file 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<conio.h>

int main()
{
    char Fname[20]; // for file name
    int fd = 0; // file descriptor
    char Data[] = "Marvellous";

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file.");
    }
    else
    {
        printf("File is succesfully open with FD  : %d",fd);
        write(fd,Data,10);// data is name of array and 10 is number of char
    }

    return 0;
}