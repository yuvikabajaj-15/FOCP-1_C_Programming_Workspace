#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Enter Number: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Enter Number 3: ");
    scanf("%d", &c);
    if (a > b){
        if (a>c){
            printf("%d\n", a);
        }
        else{
            printf("%d\n",c);
        }
    }
    else {
        if(b>c){
            printf("%d\n",b);
        }
        else{
            printf("%d\n",c);
        }
    }

    return 0;
}