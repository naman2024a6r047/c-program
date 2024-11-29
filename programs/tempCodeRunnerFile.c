#include <stdio.h>

int main() {
    float basic_salary, da, hra, total_salary;

    // Input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate DA and HRA based on conditions
    if (basic_salary <= 2000) {
        da = basic_salary * 0.10;
        hra = basic_salary * 0.20;
    } else if (basic_salary > 2000 && basic_salary <= 5000) {
        da = basic_salary * 0.20;
        hra = basic_salary * 0.30;
    } else if (basic_salary > 5000 && basic_salary <= 10000) {
        da = basic_salary * 0.30;
        hra = basic_salary * 0.40;
    } else {
        da = basic_salary * 0.50;
        hra = basic_salary * 0.50;
    }

    // Calculate total salary
    total_salary = basic_salary + da + hra;

    // Print the results
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}
