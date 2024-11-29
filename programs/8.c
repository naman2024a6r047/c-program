//WAP to convert no of days into years months and days
#include<stdio.h>
#include<math.h>
int main(){
int d,m,y;
printf("enter number of days");
scanf("%d",&d);
y=d/365;
d=d%365;
m=d/30;
d=d%30;
printf("%d years %d months %d days",y,m,d);




    return 0;
}