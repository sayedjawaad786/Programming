#include <stdio.h>
#include <string.h>

int main()
{
    
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';          // \0 = null terminator
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    // add space before %c to remove the effect of \0
    scanf(" %c", &grade);       

    //printf("Enter your name: ");
    //scanf("%s", &name);

    getchar();
    //for full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // To remove extra line after full name
    name[strlen(name) - 1] = '\0' ;


    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}