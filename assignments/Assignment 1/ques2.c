#include <stdio.h>

int main(void){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    float height;
    printf("Enter your height (in cm): ");
    scanf("%f",&height);
    char grade;
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("=====================\n");
    printf("   User Details\n");
    printf("=====================\n");
    printf("Age: %d\n", age);
    printf("Height: %0.2f cm\n", height);
    printf("Grade: %c\n", grade);
    printf("=====================");
    return 0;
}