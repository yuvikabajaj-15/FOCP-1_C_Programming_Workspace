#include <stdio.h>

int main(void){
    int player_1, player_2;
    printf("Enter Player 1 and Player 2 moves [1-Rock, 2-Paper, 3-Scissors]: ");
    scanf("%d %d", &player_1, &player_2);
    if (player_1 < 1 || player_1 > 3 ||
    player_2 < 1 || player_2 > 3) {
        printf("Invalid Input");
    }
    else {
    switch (player_1){
        case 1:
            if (player_2 == 1){
            printf("Draw");
            }
            else if (player_2 == 2){
                printf("Player 2 Wins");
            }
            else {
                printf("Player 1 Wins");
            }
            break;
        case 2:
            if (player_2 == 1){
                printf("Player 1 Wins");
            }
            else if (player_2 == 2){
                printf("Draw");
            }
            else {
                printf("Player 2 Wins");
            }
            break;
        case 3:
            if (player_2 == 1){
                printf("Player 2 Wins");
            }
            else if (player_2 == 2){
                printf("Player 1 Wins");
            }
            else {
                printf("Draw");
            }
            break;
    }
}
    return 0;
}