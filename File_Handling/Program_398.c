// accept two file name from user and  copy file content from one to another
// read whole file and display all data on screen
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
    char Fname1[20]; // for file name
    char Fname2[20]; // for file name
    int fdSource = 0, fdDest = 0, Length = 0; // file descriptor
    char Data[100];

    printf("Enter the file which contains Data : ");
    scanf("%s",Fname1);

    fdSource = open(Fname1,O_RDONLY);
    
    if(fdSource == -1)
    {
        printf("unable to open file");
        return -1;
    }

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname2);

    fdDest = creat(Fname2,0777);

    if(fdDest == -1)
    {
        printf("unable to create new file");
        return -1;
    }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);
    return 0;
}

/*
    0 standard input device - keyboard
    1 standard output device - console
    2 standard error device - console
*/
