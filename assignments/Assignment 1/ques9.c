#include <stdio.h>

int main(void){
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %0.2f °F.", fahrenheit);
    return 0;
}