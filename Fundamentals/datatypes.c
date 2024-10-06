#include <stdio.h>

int main() {
    // Primitive data types

    // Integer type: used to store whole numbers
    int age = 25; // 'age' is a variable of type int, initialized with the value 25

    // Character type: used to store single characters
    char initial = 'A'; // 'initial' is a variable of type char, initialized with the character 'A'

    // Floating-point type: used to store decimal numbers
    float height = 5.9f; // 'height' is a variable of type float, initialized with the value 5.9
    // Note the 'f' suffix to indicate a float literal

    // Double type: used to store double-precision decimal numbers
    double weight = 70.5; // 'weight' is a variable of type double, initialized with the value 70.5

    // Constants and literals

    // Integer literal: 25 is an integer literal
    int daysInWeek = 7; // 'daysInWeek' is a variable of type int, initialized with the integer literal 7

    // Character literal: 'A' is a character literal
    char grade = 'A'; // 'grade' is a variable of type char, initialized with the character literal 'A'

    // Floating-point literal: 5.9 is a floating-point literal
    float piApprox = 3.14f; // 'piApprox' is a variable of type float, initialized with the floating-point literal 3.14

    // Double literal: 70.5 is a double literal
    double gravity = 9.81; // 'gravity' is a variable of type double, initialized with the double literal 9.81

    // Constants: values that do not change
    const int MAX_AGE = 100; // 'MAX_AGE' is a constant of type int, initialized with the value 100
    // The 'const' keyword makes 'MAX_AGE' a constant, meaning its value cannot be changed

    // Printing the values
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Height: %.1f\n", height);
    printf("Weight: %.1f\n", weight);
    printf("Days in a week: %d\n", daysInWeek);
    printf("Grade: %c\n", grade);
    printf("Approximate value of Pi: %.2f\n", piApprox);
    printf("Gravity: %.2f\n", gravity);
    printf("Maximum age: %d\n", MAX_AGE);

    return 0;
}