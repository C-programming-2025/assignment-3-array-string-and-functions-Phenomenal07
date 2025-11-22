// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>
int calculatePower(int base, int expo) 
{
    if (expo == 0) 
    {
        return 1; 
    }
    return base * calculatePower(base, expo - 1); 
}
int main() {
    int base, expo;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &expo);

    int result = calculatePower(base, expo);
    printf("%d raised to the power of %d is %d\n", base, expo, result);

    return 0;
}