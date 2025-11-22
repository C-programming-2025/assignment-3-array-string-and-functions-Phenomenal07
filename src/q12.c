//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.#include<stdio.h>
#include <stdio.h>

int isPalindrome(char str[]) {
    int char_len = 0;
    int i;

    while (str[char_len] != '\0' && str[char_len] != '\n') 
    {
        char_len++;
    }

    for (i = 0; i < char_len; i++) 
    {
        if (str[i] != str[char_len - i - 1])
        {
            return 0; // 0 means false
        }
    }
    return 1; // 1 means true
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
