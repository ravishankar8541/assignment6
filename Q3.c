//Write a program to calculate sum of first N odd natural numbers
#include"stdio.h"
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2){
            sum=sum+i;
        }
    }
    printf("Sum of %d odd natural number is %d",n,sum);
    printf("\n");
    return 0;
}