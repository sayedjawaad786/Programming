/*Write a C program to evaluate e^x=1+x/1!+x^2/2!+x^3/3!+?*/

#include <stdio.h>

int main() {
    int n, i;
    float x, sum = 1.0, term = 1.0;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++) {
        term = term * x / i;
        sum += term;
    }
    
    printf("e^%.2f = %.4f\n", x, sum);
    return 0;
}