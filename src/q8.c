// Write a C program to check if a given string is a palindrome.
#include <stdio.h>
#include <string.h> 
int main (){
    char s[100];
    int char_len=0;
    int i, pali=1;
    printf("enter a string: ");
    fgets(s,sizeof(s),stdin);
    while(s[char_len]!='\0'&&s[char_len]!='\n')
    {
        char_len += 1;
    } 
    for (i=0;i<char_len;i++)
    {
        if (s[i]!=s[char_len-i-1])
        {
            pali=0;
            break;
        }
    }
    if (pali)
    {
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}