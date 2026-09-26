#include <stdio.h>

int main(void){
    char product_id[30];
    float price;
    int quantity;
    float discount;
    printf("Enter the Product ID: ");
    scanf("%s", product_id);
    printf("Enter the Product Price: ");
    scanf("%f", &price);
    printf("Enter the Quantity: ");
    scanf("%d", &quantity);
    printf("Enter the Discount Percentage: ");
    scanf("%f", &discount);
    
    float subtotal = price * quantity;
    float discount_amount = subtotal * discount/100;
    float final_amount = subtotal - discount_amount;

    printf("===============================\n");
    printf("            INVOICE            \n");
    printf("===============================\n");
    printf("Product ID           : %s\n", product_id);
    printf("Subtotal             : %0.2f\n", subtotal);
    printf("Discount Amount      : %0.2f\n", discount_amount);
    printf("Final Payable Amount : %0.2f\n", final_amount);
    printf("===============================\n");

    return 0;
}