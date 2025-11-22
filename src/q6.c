// Write a C program to find the length of a string without using the built-in string functions.
#include<stdio.h>
int main(){
    char s[100];
    int char_len=0;
    printf("enter a string: ");
    fgets(s,sizeof(s),stdin);
    while(s[char_len]!='\0'&&s[char_len]!='\n')
    {
        char_len += 1;
    }
    printf("length of string: %d\n",char_len); //here space is also counted as a char
    return 0;
}