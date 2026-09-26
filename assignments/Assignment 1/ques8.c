#include <stdio.h>

int main(void){
    float basic_salary, allowance, bonus;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);
    printf("Enter Allowance: ");
    scanf("%f", &allowance);
    printf("Enter Bonus: ");
    scanf("%f", &bonus);
    float final_salary = basic_salary+allowance+bonus;
    printf("Final Salary: %0.2f", final_salary);
    return 0;
}