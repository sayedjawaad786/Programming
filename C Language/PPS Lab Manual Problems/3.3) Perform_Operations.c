/*Write a menu driven program that allow the user to perform any one of the following operations based on the input given by user
a. check number is even or odd
b. check number is positive or negative
c. printing square of the number
d. printing square root of the number*/

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num;
    
    printf("Menu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Positive or Negative\n");
    printf("3. Print Square of Number\n");
    printf("4. Print Square Root of Number\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    switch(choice) {
        case 1:
            if ((int)num % 2 == 0)
                printf("Result: Even\n");
            else
                printf("Result: Odd\n");
            break;
        case 2:
            if (num > 0)
                printf("Result: Positive\n");
            else if (num < 0)
                printf("Result: Negative\n");
            else
                printf("Result: Zero\n");
            break;
        case 3:
            printf("Square: %.2f\n", num * num);
            break;
        case 4:
            if (num >= 0)
                printf("Square Root: %.2f\n", sqrt(num));
            else
                printf("Invalid input for square root.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}