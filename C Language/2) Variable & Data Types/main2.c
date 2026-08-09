#include <stdio.h>
#include <stdbool.h>

int main() 
{
    
    int age = 18;
    int year = 2025;
    int quantity = 1;

    printf("The year is %d.\n", year);
    printf("You are %d years old.\n", age);
    printf("You have %d item(s).\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float temp = -10.1;
    /* float can only store 6-7 digits after decimal point,
    if you want to store more than that use double data type.*/

    printf("Your GPA is %f.\n", gpa);
    printf("Your GPA is %.2f.\n", gpa);
    printf("The price is $%.2f.\n", price);
    printf("The temperature is %.1f°C.\n", temp);

    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;

    printf("The value of pi is %.15lf.\n", pi);
    printf("The value of e is %.15lf.\n", e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c.\n", grade);
    printf("Your favourite symbol is %c.\n", symbol);
    printf("Your currency is %c.\n", currency);

    // We use char for strings.
    char name[] = "Jawaad";
    char food[] = "Biryani";

    printf("Hello %s!\n", name);
    printf("Your favourite food is %s.\n", food);

    bool isOnline = true;   // true = 1 & false = 0  

    printf("%d\n", isOnline); // prints 1

    if(isOnline)
    {
        printf("You are ONLINE.\n");
    }
    else
    {
        printf("You are OFFLINE.\n");
    }

    bool isStudent = 0; 

    printf("%d\n", isStudent); // prints 0

    if(isStudent)
    {
        printf("You are a student.\n");
    }
    else
    {
        printf("You are not a student.\n");
    }


    return 0;
}