// Write a C program to merge two sorted arrays into a single sorted array.
#include<stdio.h>
int main(){
    int num1, num2, i, j, t;
    
    printf("Enter the number of elements on the first sorted array: ");
    scanf("%d", &num1);
int arr1[num1];
    printf("Enter %d elements in sorted order:\n", num1);
    for(i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &num2);
    int arr2[num2];
    printf("Enter %d elements in sorted order:\n", num2);
    for(i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    int merge[num1 + num2];
    t=i=j=0;
    while(i<num1 && j<num2)
    {
        if(arr1[i] < arr2[j])
        {
            merge[t++] = arr1[i++];
        }
        else
        {
            merge[t++]=arr2[j++];
        }
    }
    while (i<num1)
    {
        merge[t++]=arr1[i++];
    }
    while(j < num2){
         merge[t++] = arr2[j++]; 
    }
    printf("Merged sorted array is:\n");
    for(i = 0; i < num1 + num2; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}