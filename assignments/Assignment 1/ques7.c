#include <stdio.h>

int main(void){
    float maths, english, chemistry, physics, biology;
    printf("Enter your English marks (out of 100): ");
    scanf(" %f",&english);
    printf("Enter your Maths marks (out of 100): ");
    scanf(" %f",&maths);
    printf("Enter your Chemistry marks (out of 100): ");
    scanf(" %f",&chemistry);
    printf("Enter your Physics marks (out of 100): ");
    scanf(" %f",&physics);
    printf("Enter your Biology marks (out of 100): ");
    scanf(" %f",&biology);
    float total_marks = maths+english+chemistry+physics+biology;
    printf("Total Marks = %0.1f/500\n",total_marks);
    float percentage = (total_marks/500)*100;
    printf("Percentage = %0.2f %%\n", percentage);
    return 0;
}