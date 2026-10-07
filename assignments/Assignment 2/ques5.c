#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter Operator [+,-,*,/,%%]: ");
    scanf(" %c",&op);
    switch (op) {
        case '+':
            printf("Result = %d", num1+num2);
            break;
        case '-':
            printf("Result = %d", num1-num2);
            break;
        case '*':
            printf("Result = %d", num1*num2);
            break;
        case '/':
            if (num2 == 0){
                printf("Cannot divide by zero");
            }
            else {
                printf("Result = %d", num1/num2);
            }
             break;
        case '%':
            if (num2 == 0){
                printf("Cannot divide by zero");
            }
            else {
            printf("Result = %d", num1%num2);
            }
            break;
        default:
        printf("ERROR !\nInput number/Operator is invalid");
        break;
    }
    return 0;
}