//WAP to find swaping of two numbers without using third variable
#include<stdio.h>
#include<math.h>
int main()
{
 int a,b;
 printf("enter two numbers ");
 scanf("%d%d",&a,&b);
 a=a-b;
 b=a+b;
 a=b-a;
 printf("swaping of a=%d\nswaping of b=%d",a,b);

    return 0;
}