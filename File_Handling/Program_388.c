// programatical read data from file and read data from that file
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

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
       return -1;
    }

    //read(kuthun vachaychay, kashat vachaycy, kiti)
    read(fd,Data,13);

    printf("Data from file is : %s",Data);

    return 0;
}