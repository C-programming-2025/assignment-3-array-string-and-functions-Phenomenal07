// Implement a C program to reverse a string.
#include<stdio.h>
int main(){
    char s[100];
    int char_len=0;
    int i;
    printf("enter a string: ");
    fgets(s,sizeof(s),stdin);
    while(s[char_len]!='\0'&&s[char_len]!='\n')
    {
        char_len += 1;
    }
    printf("length of string is: %d\n",char_len);
    char rev_string[char_len+1]; 
    for (i=0;i<char_len;i++)
    {
        rev_string[i]=s[char_len-i-1];
    }
    rev_string[char_len]='\0'; 
    printf("Reversed string is: %s\n",rev_string);
    return 0;
}
