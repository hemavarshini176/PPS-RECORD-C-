/*
Aim:
    To demonstrate the use of union in C.

Algorithm:
    1. Define a union Data with int roll and float marks.
    2. Declare a union variable d.
    3. Assign and print roll.
    4. Assign and print marks.
    5. Observe that the last assigned member overwrites the previous value.

Sample Output:
    Roll = 101
    Marks = 89.50
*/

#include <stdio.h>

union Data {
    int roll;
    float marks;
};

int main() {
    union Data d;

    d.roll = 101;
    printf("Roll = %d\n", d.roll);

    d.marks = 89.5f;
    printf("Marks = %.2f\n", d.marks);

    return 0;
}
