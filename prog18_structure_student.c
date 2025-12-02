/*
Aim:
    To demonstrate the use of structures by storing and displaying student information.

Algorithm:
    1. Define a structure Student with roll, name and marks.
    2. Declare a structure variable s.
    3. Read student details.
    4. Display the stored details.
    5. Stop the program.

Sample Output:
    Enter roll: 101
    Enter name: Sandeep
    Enter marks: 89.50

    Student Details:
    Roll  : 101
    Name  : Sandeep
    Marks : 89.50
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}
