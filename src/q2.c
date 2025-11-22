// Implement a C program to reverse the elements of an array.
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n],new[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0 ;i<n; i++)
    {
        new[i]=arr[n-i-1];
    }
    printf("Reversed array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", new[i]);
    }
    return 0;
}