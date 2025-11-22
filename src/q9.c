// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
int main() {
    char s[100];
    char char_count;
    int char_len = 0;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    while (s[char_len] != '\0' && s[char_len] != '\n')
    {
        char_len += 1;
    }

    printf("Enter the character to count: ");
    scanf(" %c", &char_count);
    for (i = 0; i < char_len; i++) 
    {
        if (s[i] == char_count) {
            count += 1;
        }
    }
    printf("In the string,'%c' occurs %d times.\n", char_count, count);
    return 0;
}