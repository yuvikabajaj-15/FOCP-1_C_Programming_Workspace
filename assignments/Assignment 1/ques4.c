#include <stdio.h>

int main(void){
    int x,y,z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    float average=(x+y+z)/3.0;
    printf("Average = %0.2f", average);
    return 0;
}