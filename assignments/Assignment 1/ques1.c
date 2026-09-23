#include <stdio.h>

int main(void) {
    char student_id[30];
    printf("Enter Your Student ID: ");
    scanf("%s",student_id);
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    float percentage;
    printf("Enter Your Percentage: ");
    scanf("%f%%",&percentage);
    char grade;
    printf("Enter Your Grade: ");
    scanf(" %c",&grade);
    printf("=========================\n");
    printf("   Student Information\n");
    printf("=========================\n");
    printf("Student ID: %s\n", student_id);
    printf("Age: %d\n", age);
    printf("Percentage: %0.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("=========================");
    return 0;
}