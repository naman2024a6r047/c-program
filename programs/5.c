//WAP to find total marks and percentage of five subjects
#include<stdio.h>
#include<math.h>
int main()
{
 int m1,m2,m3,m4,m5,per,mar;
 printf("enter marks of five subjects ");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
 mar=m1+m2+m3+m4+m5;
 per=0.2*mar;
 printf("total marks=%d\n percentage=%d",mar,per);

    return 0;
}