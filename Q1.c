//Write a program to calculate sum of first N natural numbers
#include"stdio.h"
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum=sum+i;
    }
    printf("Sum of %d natural number are  %d",n,sum);
    printf("\n");
    return 0;
}