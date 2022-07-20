//Write a program to count digits in a given number
#include"stdio.h"
int main()
{
    int n,q,count=0;
    printf("Enter any number :");
    scanf("%d",&n);
    while(n!=0){
  n=n/10;
   count++;
    }
    printf("%d digit in number ",count);
    printf("\n");
    return 0;
}