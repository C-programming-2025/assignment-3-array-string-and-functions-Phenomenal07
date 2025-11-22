//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
#include <string.h>

int countOccurrencesRecursive(char str[], char count, int i) 
{
    if (str[i] == '\0') 
    {
        return 0; 
    }
    if (str[i] == count) 
    {
        return 1 + countOccurrencesRecursive(str, count, i + 1);
    } 
    else 
    {
        return countOccurrencesRecursive(str, count, i + 1);
    }
}
int countOccurrences(char str[], char target_ch) 
{
    return countOccurrencesRecursive(str, target_ch, 0);
}

int main() {
    char str[100], count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf("%c", &count);

    int result = countOccurrences(str, count);
    printf("%c appears %d times in %s.\n", count, result, str);
    return 0;
}