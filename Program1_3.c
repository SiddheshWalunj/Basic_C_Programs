//3.Program to Print 5 to 1 numbers on screen.
#include<stdio.h>

void Display()
{
    int i = 0;
     i = 5;
    for(i = 5; i >= 1; i--)
    {
        printf("%d",i);
        i++;
    }
}
int main()
{
    Display();

    return 0;
}