/*
Aim:
    To perform basic file operations: write to a file and read from it.

Algorithm:
    1. Declare a FILE pointer and a character array.
    2. Open a file "sample.txt" in write mode.
    3. Write "Hello File!" to it using fprintf().
    4. Close the file.
    5. Open the same file in read mode.
    6. Read content using fgets().
    7. Display the content.
    8. Close the file.

Sample Output:
    File Content: Hello File!
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "Hello File!");
    fclose(fp);

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fgets(text, sizeof(text), fp);
    printf("File Content: %s\n", text);
    fclose(fp);

    return 0;
}
