#include <stdio.h>

int main()
{
    // arithmetic operators = + - * / % ++ -- 

    int x = 2;
    int y = 3;
    int z = 0;

    // z = x + y;       // prints 5
    // z = x - y;       // prints -1
    // z = x * y;       // prints 6
    // z = x / y;       // prints 0 because of int data type
    // z = x % y;       // prints 1

    // x++ ;            // prints 3
    // x-- ;            // prints 1

    // augmented assignment operators
    // x = x + 2 ; or x += 2 ; is same    // prints 4
    // x = x - 2 ; or x -= 2 ; is same    // prints 0
    // x = x * 2 ; or x *= 2 ; is same    // prints 4
    // x = x / 2 ; or x /= 2 ; is same    // prints 1
    // x = x % 2 ; or x %= 2 ; is same    // prints 4


    printf("%d\n", x);
    printf("%d\n", z);

    return 0;
}