//WAP to to check weather given number is single digit ,two digit, three digit or more than therr digits
#include<stdio.h>
#include<math.h>
int main(){
int num,n;
printf("enter any number");
scanf("%d",num);
 n= (int)log10(num) + 1;
if(n==1){
    printf("The number is a single-digit number.\n");
}
else if(n==2){
    printf("The number is two-digit number.\n");
}
else if(n==3){
    printf("The number is a three-digit number.\n");
}
else 
    printf("The number is more then three-digit number.\n");

    return 0;
}