#include <stdio.h>

long long int sumSquareSeries(int n){
    long long int sum=0;
    for (int i = 1; i <= n; i++){
        sum+=(i*i);
    }
    return sum;
}

int main(void){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("%lld",sumSquareSeries(n));
}