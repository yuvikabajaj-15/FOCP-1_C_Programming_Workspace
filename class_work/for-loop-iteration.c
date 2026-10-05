#include <stdio.h>

int main(void){
    int i=1;
    for (;i<=10;)
    {
        printf("%d\n",i);
        i++;
    }
    printf("i after loop %d\n ",i);
    return 0;
}