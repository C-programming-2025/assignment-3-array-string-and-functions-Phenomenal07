// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
#include <stdio.h>
int calculateFibonacci(int num) 
{
    if (num == 0) 
    {
        return 0;
    } else if (num == 1) 
    {
        return 1;
    }
    return calculateFibonacci(num - 1) + calculateFibonacci(num - 2);
}
int main() {
    int n;
    printf("Enter a positive integer): ");
    scanf("%d", &n);

    int result = calculateFibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, result);
    return 0;
}