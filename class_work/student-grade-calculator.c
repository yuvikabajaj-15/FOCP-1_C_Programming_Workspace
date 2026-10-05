#include <stdio.h>

int main(void) {
    float marks;
    printf("Enter your Maths marks: ");
    scanf("%f",&marks);
    if (marks >= 90){
        printf("You have achieved A grade.");
    }
    else if (marks >= 80){
        printf("You have achieved B grade.");
    }
    else if (marks >= 70){
        printf("You have achieved C grade");
    }
    else if (marks >= 60){
        printf("You have achieved D grade");
    }
    else if (marks >= 50){
        printf("You have achieved E grade");
    }
    else {
        printf("You have achieved F grade");
    }
    return 0;
}