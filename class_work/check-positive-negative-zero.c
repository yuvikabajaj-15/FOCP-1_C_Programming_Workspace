#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number < 0){
        printf("%d is negative.",number);
    }
    else if (number == 0){
        printf("%d is zero.", number);
    }
    else {
        printf("%d is positive.", number);
    }
    return 0;
}