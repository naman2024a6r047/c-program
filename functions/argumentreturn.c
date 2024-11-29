//WAP to find cube of a number using function
//without return type and with argument
#include <stdio.h>
void calculateCube(int num) {
    int cube = num * num * num;
    printf("The cube of %d is %d\n", num, cube);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    calculateCube(number);
     return 0;
}