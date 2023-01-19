// accept two file name from user and  copy file content from one to another
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main(int argc, char *argv[])
{
    int fdSource = 0, fdDest = 0, Length = 0; // file descriptor
    char Data[100];

    fdSource = open(argv[1],O_RDONLY);
    
    if(fdSource == -1)
    {
        printf("unable to open file");
        return -1;
    }

    fdDest = creat(argv[2],0777);

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

    printf("Data successfully copied....!");
    return 0;
}

/*
    0 standard input device - keyboard
    1 standard output device - console
    2 standard error device - console
*/

// .Program_399     Marvellous.txt      Demo.txt
//    argv[0]         argv[1]          argv[2]