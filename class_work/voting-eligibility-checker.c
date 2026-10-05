#include <stdio.h>

int main(void){
    int age;
    char nationality;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your nationality, write I for Indian and O for others: ");
    scanf(" %c",&nationality);
    if (age < 18){
        printf("You are not eligible for voting as you are under 18.\n");
    }
    else if (nationality != 'I'){
        printf("You are not eligible for voting as you are not Indian.\n");
    }
    else {
        printf("You are eligible for voting");
    }
    return 0;
}