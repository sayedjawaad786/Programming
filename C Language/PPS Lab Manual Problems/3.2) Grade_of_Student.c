/*WAP to print the grade of a student based on 
marks of 5 subjects entered by the user.*/

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;
    
    printf("Enter marks of 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 70)
        printf("Grade: C\n");
    else if (percentage >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
        
    return 0;
}