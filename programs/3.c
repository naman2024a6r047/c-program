//WAP to find swaping of two numbers by using 3rd variable
#include<stdio.h>
int main()
{
    int a,b,c;
 printf("enter two numbers ");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("swaping of a=%d\nswaping of b=%d",a,b);

    return 0;
}