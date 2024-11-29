//WAP to convert temperature given in fernhite to celcious 
#include<stdio.h>
#include<math.h>
int main()
{
 int f;
 float c;
 printf("enter temperature in fernheit ");
 scanf("%d",&f);
 c=(f-32)*0.5555555555;
 printf("digree celcius=%.3f",c);

    return 0;
}