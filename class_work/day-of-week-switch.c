#include <stdio.h>
int main(void){
    int day_number;
    printf("Enter number between 1-7: ");
    scanf("%d", &day_number);
    switch (day_number){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default: printf("Not a valid day number");
    }
    return 0;
}