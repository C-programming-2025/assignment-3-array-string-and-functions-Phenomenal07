// Implement a C program to find the second largest element in an array.
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int frst, second;
    frst = second = arr[0]; 
    for(i = 0; i < n; i++)
    {
        if(arr[i] > frst)
        {
            second = frst;
            frst = arr[i];
        } else if(arr[i] > second && arr[i] != frst)
        {
            second = arr[i];
        }
    }
printf("Second largest element is: %d\n", second);
    return 0;
}