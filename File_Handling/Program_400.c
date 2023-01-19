// accept two file name from user and  copy file content from one to another
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main(int argc, char *argv[])// argc for argument count // argv for argument vector
{
    printf("Number of argument are : %d\n",argc);

    printf("Name of executable is : %s",argv[0]);
    
    return 0;
}

/*
    0 standard input device - keyboard
    1 standard output device - console
    2 standard error device - console
*/
