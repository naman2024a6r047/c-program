//WAP to check weather the give number is even or odd
#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
if (n%2==0){
    printf("%d is even",n);
}
else
printf("%d is odd",n);
    return 0;
}