/*
Aim:
    To store and display details of multiple students using array of structures.

Algorithm:
    1. Define structure Student with roll and name.
    2. Declare an array s of size 3.
    3. In a loop, read roll and name for each student.
    4. In another loop, display the list of students.
    5. Stop the program.

Sample Output:
    Enter details of 3 students
    Student 1 roll and name: 1 Ram
    Student 2 roll and name: 2 Sam
    Student 3 roll and name: 3 Ravi

    Student List:
    1 Ram
    2 Sam
    3 Ravi
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
};

int main() {
    struct Student s[3];

    printf("Enter details of 3 students\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d roll and name: ", i + 1);
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
