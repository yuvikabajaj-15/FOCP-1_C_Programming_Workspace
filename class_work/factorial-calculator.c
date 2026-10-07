#include <stdio.h>

int main(void){
    int n,i;
    long long int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
    factorial *= i;
    }
    printf("Factorial of %d = %lld\n",n,factorial);
    return 0;
}