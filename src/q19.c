//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>
int calculateFactorial(int num) 
{
    if (num < 0) {
        return 0; 
    }
    int factorial = 1;
    for (int i = 1; i <= num; i++) 
    {
        factorial *= i;
    }
    return factorial;
}
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial series up to %d is:\n", n);
    for (int i = 0; i <= n; i++) 
    {
        printf("%d\t", calculateFactorial(i));
    }
    return 0;
}