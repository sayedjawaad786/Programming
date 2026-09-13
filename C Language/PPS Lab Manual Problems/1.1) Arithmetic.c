/*Write a program that reads two nos. from a keyboard and gives 
their addition, subtraction, multiplication, division and modulo.*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / b);
    printf("Modulo: %d\n", a % b);
    
    return 0;
}