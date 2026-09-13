/*WAP to find sum of all integers greater 
than 100 & less than 200 and are divisible by 5.*/

#include <stdio.h>

int main() {
    int i, sum = 0;
    
    for (i = 101; i < 200; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    
    printf("Sum of integers greater than 100 & less than 200 divisible by 5: %d\n", sum);
    return 0;
}