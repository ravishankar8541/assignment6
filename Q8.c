/*Write a program to check whether a given number is a Prime number or
not*/
#include"stdio.h"
int main()
{
    int i,n,count=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     if(n%i==0){
        count++;
     }
    }
    if(count==2){
        printf("Prime number ");
    }else{
        printf("Not prime number ");
    }
    printf("\n");
    return 0;
}