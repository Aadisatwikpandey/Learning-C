#include <stdio.h>

int main() {
    char name[128];
    int age;
    float marks;

    // Take input for Name
    printf("Please Enter your Full Name: \n");
    scanf(" %[^\n]", name);  

    // Take input for age
    printf("Please Enter your age: \n");
    scanf("%d", &age);  

    // Take input for average marks
    printf("Please Enter your average marks: \n");
    scanf("%f", &marks);  

    // Print all the input values
    printf("Your name is %s. You are %d years old. Your average marks are %.2f.\n", name, age, marks);

    return 0;
}

