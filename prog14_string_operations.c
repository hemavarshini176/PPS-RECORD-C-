/*
Aim:
    To perform string copy, reverse and concatenation.

Algorithm:
    1. Read string s1.
    2. Copy s1 → s2.
    3. Reverse s3.
    4. Concatenate s1 and s2.
    5. Print results.

Sample Output:
    First year
    Copied: First year
    Reversed: raey tsriF
    Concatenated: First yearFirst year
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    strcpy(s2, s1);
    strcpy(s3, s1);

    int len = strlen(s3);
    for (int i = 0; i < len / 2; i++) {
        char temp = s3[i];
        s3[i] = s3[len - 1 - i];
        s3[len - 1 - i] = temp;
    }

    strcat(s1, s2);

    return 0;
}
