#include <stdio.h>

int main(void){
    int marks, attendance;
    printf("Enter marks and attendance %%: ");
    scanf("%d %d", &marks, &attendance);
    if (marks >= 90 && attendance >= 70){
        printf("Special Scholarship");
    }
    else if (marks >= 75 && attendance >= 75){
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}