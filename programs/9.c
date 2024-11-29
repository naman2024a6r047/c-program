//WAP to convert milliseconds into hours, minutes and seconds
#include<stdio.h>
#include<math.h>
int main(){
int mi,mn,s,h;
printf("enter number of millie seconds");
scanf("%d",&mi);
h=mi/3600000;
mi=mi%3600000;
mn=mi/60000;
mi=mi%60000;
s=mi/1000;
mi=mi%1000;
printf("%d hours %d minutes %d seconds %d milliseconds",h,mn,s,mi);
  return 0;
}