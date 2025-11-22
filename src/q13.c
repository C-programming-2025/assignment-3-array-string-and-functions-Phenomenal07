// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>
int findFactorial(int num) {
    int findFactorial = 1;
    int i;
    for (i = 1; i <= num; i++) 
    {
        findFactorial = findFactorial * i;
    }
    return findFactorial;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = findFactorial(num);
    printf("Factorial of %d is %d", num, result);
    return 0;
}
