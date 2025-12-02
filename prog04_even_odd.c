/*
Aim:
    To check whether a number is even or odd.

Algorithm:
    1. Read a number.
    2. If number % 2 == 0 → even.
    3. Else → odd.
    4. Stop the program.

Sample Output:
    Enter a number: 7
    7 is Odd
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}
