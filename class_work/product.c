#include <stdio.h>

int main(void) {
    char product_name[30];
    printf("Enter Your Product Name: ");
    scanf("%s",product_name);
    int quantity;
    printf("Enter the quantity: ");
    scanf("%d",&quantity);
    float unit_price;
    printf("Enter the unit price: ");
    scanf("%f",&unit_price);
    char category_code;
    printf("Enter the category code: ");
    scanf(" %c",&category_code);
    unsigned int stock_count;
    printf("Enter stock count: ");
    scanf("%u",&stock_count);
    printf("==========================================\n");
    printf("             Product Card               \n");
    printf("==========================================\n");
    printf("Product Name      :%13s\n", product_name);
    printf("Quantity          :%8d\n", quantity);
    printf("Unit Price        :%15f\n", unit_price);
    printf("Category Code     :%7c\n", category_code);
    printf("Stock Count       :%8u\n", stock_count);
    printf("==========================================");
    return 0;
}