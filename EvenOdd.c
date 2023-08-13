#include <stdio.h>
int even_odd(int);
void main() {
    int n,flag=0;
    printf("Going to check whether a number is even or odd\n");
    printf("Enter a number: \n");
    scanf("%d",&n);
    flag= even_odd(n);
    if (flag==0){
        printf("\nThe given number %d is an ODD",n);
        }
        else{
            printf("\n The Given Number %d Is An EVEN NUMBER ",n);
                        return 0;

            }
            }
        int even_odd(int n)
        {
            if (n%2==0){
                return  1 ;
            }
            else{
                return   0;
                }
        }