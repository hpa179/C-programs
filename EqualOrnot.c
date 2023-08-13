//write a C program to accept 2 integers and check whether they are equal or not

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two integers: ");
    scanf("%d %d",&x,&y);
    if(x==y)
    printf("The two integers are equal.");
    else
    printf("The two integers are not equal.");
    return 0;
    }
