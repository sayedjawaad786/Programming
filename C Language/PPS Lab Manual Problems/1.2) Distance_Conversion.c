/*The distance between two cities (In KM) is input through a keyboard. Write a 
program to convert and print this distance in meters, feet, inches & centimeters.*/

#include <stdio.h>

int main() {
    float km, m, ft, in, cm;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    
    m = km * 1000;
    cm = km * 100000;
    ft = km * 3280.84;
    in = km * 39370.1;
    
    printf("%.2f KM is equivalent to:\n", km);
    printf("%.2f Meters\n", m);
    printf("%.2f Feet\n", ft);
    printf("%.2f Inches\n", in);
    printf("%.2f Centimeters\n", cm);
    
    return 0;
}