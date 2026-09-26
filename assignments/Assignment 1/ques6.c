#include <stdio.h>

int main(void){
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    int quotient = x/y;
    int remainder = x%y;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}