// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.
#include <stdio.h>
int reverseArray(int arr[], int size)
{
 int i, temp;
    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    return 0;
}
int main() {
    int arr[100], size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size); 
    printf("Reversed array:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}