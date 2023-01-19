// accept file name from user and and data from user and open that file 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
    char Fname[20]; // for file name
    int fd = 0, Length = 0; // file descriptor
    char Data[100];

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
       return -1;
    }

    printf("Enter the data that you want to write in the file : ");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);
    //write(kashat,kay,kiti);
    write(fd,Data,Length);// data is name of array and 10 is number of char

    return 0;
}