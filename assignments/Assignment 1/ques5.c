#include <stdio.h>

int main(void){
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("Before swapping: %d %d\n", x,y);
    int z = x;
    x = y;
    y = z;
    printf("After swapping: %d %d", x,y);
    return 0;
}