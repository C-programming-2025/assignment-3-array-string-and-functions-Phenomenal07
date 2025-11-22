// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
#include <stdio.h>
int isPrime(int n) 
{
    if (n <= 1) 
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: \n", n);
    for (int i = 2; i <= n; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
