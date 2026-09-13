/*Write a program to print a series of arm-strong numbers
 from m to n. m, n will be input by user.
 Armstrong are those numbers where number= sum of cubes of digits.*/

#include <stdio.h>

int main() {
    int m, n, i, temp, remainder, result;
    
    printf("Enter interval (m and n): ");
    scanf("%d %d", &m, &n);
    
    // Safety check: if user enters 500 then 100, swap them
    if (m > n) {
        temp = m;
        m = n;
        n = temp;
    }
    
    printf("Armstrong numbers between %d and %d are: ", m, n);
    
    for (i = m; i <= n; i++) {
        temp = i;
        result = 0;
        
        while (temp != 0) {
            remainder = temp % 10;
            // The question strictly defines it as the sum of cubes
            result += (remainder * remainder * remainder); 
            temp /= 10;
        }
        
        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}