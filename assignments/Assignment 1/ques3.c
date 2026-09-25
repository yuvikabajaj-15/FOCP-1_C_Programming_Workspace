#include <stdio.h>

int main(void){
    float price;
    printf("Enter the price of one item: ");
    scanf("%f",&price);
    int quantity;
    printf("Enter the quantity purchased: ");
    scanf("%d",&quantity);
    float total_bill;
    printf("Your total bill is %0.2f.", price*quantity);
    return 0;
}