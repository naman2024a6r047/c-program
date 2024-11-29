//WAP to check weather a given person is eligible for voting or not
#include<stdio.h>
int main(){
int age;
printf("enter the age of a given person");
scanf("%d",&age);
if (age>=18){
    printf("the person is eligible to vote");
}
else
printf("the person is a minor");
    return 0;
}