#include <stdio.h>

int main(void){
    int units;
    int bill;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    if (units <= 100){
        bill = units * 2;
        printf("%d",bill);
    }
    else if (units <= 200){
        bill = 100 * 2 + (units - 100) * 3;
        printf("%d",bill);
    }
    else {
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;
        printf("%d",bill);
    }
    return 0;
}