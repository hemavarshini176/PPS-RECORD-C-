/*
Aim:
    To understand and demonstrate the use of basic data types in C.

Algorithm:
    1. Start the program.
    2. Declare variables of int, float, char and double.
    3. Print them using printf() with proper format specifiers.
    4. Stop the program.

Sample Output:
    Integer : 10
    Float   : 5.50
    Character : A
    Double : 123.457
*/

#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 123.456789;

    printf("Integer : %d\n", a);
    printf("Float   : %.2f\n", b);
    printf("Character : %c\n", c);
    printf("Double : %.3lf\n", d);

    return 0;
}
