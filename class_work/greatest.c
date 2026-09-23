#include <stdio.h>
int main(void){
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("Enter third number: ");
    scanf("%d",&z);

    (x>y)? ((x>z)? printf("The greatest number is %d",x): printf("The greatest number is %d",z))
         : ((y>z)? printf("The greatest number is %d",y): printf("The greatest number is %d",z));
    return 0;
}