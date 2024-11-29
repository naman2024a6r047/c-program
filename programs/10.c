//WAP to check weather given number is even or odd using ternary operators pno.12
#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter a number ");
scanf("%d",&n);
(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
  return 0;
}