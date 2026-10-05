#include <stdio.h>

int main(void){
    int x = 15, y;
    x = x+1; // 16
    x++; // postfix increment 17
    printf("x=%d\n",x); //17
    ++x; //prefix increment
    printf("x=%d\n",x); //18
    printf("\nx=%d\n", ++x); //x=x+1; printf("x=%d\n",x)
    printf("x= %d\n", x++); //printf("x=%d\n",x); x=x+1

    y=x;
    printf("\nx=%d y=%d\n", x,y);
    y=++x; // x=x+1; y=x
    printf("x=%d y=%d\n", x,y);
    y=x++; // y=x; x=x+1
    printf("x=%d y=%d\n", x,y);
    return 0;
}