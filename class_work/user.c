#include <stdio.h>

int main() {
    int userid, password;

    printf("Enter User ID: ");
    scanf("%d", &userid);

    if (userid == 1234) {
        printf("Enter 4-digit Password: ");
        scanf("%d", &password);

        if (password == 5678) {
            printf("Login successful");
        }
        else {
            printf("Incorrect password");
        }
    }
    else {
        printf("Invalid user ID");
    }

    return 0;
}