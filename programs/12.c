//WAP to find the largest number among three using ternary operators pno.14
#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,largest;
printf("enter three numbers ");
scanf("%d%d%d",&a,&b,&c);
largest =(a>b)?(a>c)?(a):(c):(b>c)?(b):(c);
printf("%d is the largest value",largest);
  return 0;
}
