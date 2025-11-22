// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>
int main() {
    char s1[100], string2[100];
    int l1 = 0, l2 = 0;
    int i, j;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    while (s1[l1] != '\0' && s1[l1] != '\n') 
    {
        l1++;
    }
    printf("Enter second string: ");
    fgets(string2, sizeof(string2), stdin);
    while (string2[l2] != '\0' && string2[l2] != '\n') 
    {
        l2++;
    }

    for (i = 0; i < l2; i++)
    {
        s1[l1 + i] = string2[i];
    }
    s1[l1 + l2] = '\0';
    printf("Concatenated string: %s\n", s1);
    return 0;
}