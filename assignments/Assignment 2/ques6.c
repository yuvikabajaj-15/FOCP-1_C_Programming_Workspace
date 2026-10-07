#include <stdio.h>

int main(void){
    char test;
    printf("Enter a character: ");
    scanf(" %c",&test);
    if (test == 'a' || test == 'e' || test == 'i' || test == 'o' || test == 'u' || test == 'A' || test == 'E' || test == 'I' || test == 'O' || test == 'U'){
        printf("Vowel");
    }
    else if (test >= '0' && test <= '9'){
        printf("Digit");
    }
    else if (test >= 'a' && test <= 'z' || test >= 'A' && test <= 'Z'){
        printf("Consonant");
    }
    else {
        printf("Special Character");
    }
    return 0;
}