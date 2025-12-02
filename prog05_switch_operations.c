/*
Aim:
    To perform arithmetic operations using switch-case.

Algorithm:
    1. Read two numbers.
    2. Display menu (1-4).
    3. Use switch:
           1 → Addition
           2 → Subtraction
           3 → Multiplication
           4 → Division
    4. Print result.
    5. Stop the program.

Sample Output:
    Enter two numbers: 10 5
    Enter choice: 3
    Product = 50
*/

#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Sum = %d\n", a + b); break;
        case 2: printf("Difference = %d\n", a - b); break;
        case 3: printf("Product = %d\n", a * b); break;
        case 4: printf("Quotient = %.2f\n", (float)a / b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
