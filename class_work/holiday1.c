#include <stdio.h>
int main(void){
    int dayno;
    int holiday;
    printf("Enter Week day: ");
    scanf("%d", &dayno);
    printf("Is holiday [y=0/n=1]: ");
    scanf("%d", &holiday);

    if ((dayno == 2 || dayno == 3) && !holiday){
        printf("FOCP class scheduled\n");
    }
    else{
        printf("NO FOCP class scheduled\n");
    }
    return 0;
}