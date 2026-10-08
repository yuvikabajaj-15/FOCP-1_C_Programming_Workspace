#include <stdio.h>

int main(void){
    int pin, amount, balance;
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    if (pin == 1234){
        printf("Enter amount and balance: ");
        scanf("%d %d", &amount, &balance);
        if (amount % 100 == 0 && amount > 0){
            if (amount <= balance){
                printf("Withdrawal Successful");
            }
            else {
                printf("Insufficient Balance");
            }
        }
        else {
            printf("Invalid Amount");
        }
    }
    else {
        printf("Invalid PIN");
    }
    return 0;
}