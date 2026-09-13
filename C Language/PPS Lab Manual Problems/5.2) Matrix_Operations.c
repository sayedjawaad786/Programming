/*Write a program to perform various matrix operations Addition, 
Subtraction, Multiplication, Transpose using switch-case statements.*/

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2], choice, i, j, k;
    
    printf("Enter elements of 2x2 Matrix A:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of 2x2 Matrix B:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of A\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result of Addition:\n");
            for(i=0; i<2; i++) {
                for(j=0; j<2; j++) printf("%d\t", a[i][j] + b[i][j]);
                printf("\n");
            }
            break;
        case 2:
            printf("Result of Subtraction:\n");
            for(i=0; i<2; i++) {
                for(j=0; j<2; j++) printf("%d\t", a[i][j] - b[i][j]);
                printf("\n");
            }
            break;
        case 3:
            printf("Result of Multiplication:\n");
            for(i=0; i<2; i++) {
                for(j=0; j<2; j++) {
                    c[i][j] = 0;
                    for(k=0; k<2; k++) {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Transpose of Matrix A:\n");
            for(i=0; i<2; i++) {
                for(j=0; j<2; j++) printf("%d\t", a[j][i]);
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}