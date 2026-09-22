#include <stdio.h>
int main(void){
    int dayno;
    char holiday;
    printf("Enter Week day: ");
    scanf("%d", &dayno);
    printf("Is holiday [y/n]: ");
    scanf(" %c", &holiday);

    if ((dayno == 2 || dayno == 3) && !(holiday =='y' || holiday =='Y' )){ // Added ! in front of the whole condition of holiday to make it work
        printf("FOCP class scheduled\n");
    }
    else{
        printf("NO FOCP class scheduled\n");
    }
    return 0;
}