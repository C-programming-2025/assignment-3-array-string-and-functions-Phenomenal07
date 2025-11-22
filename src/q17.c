// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include<stdio.h>
int calculatePower(int base, int expo)
{
int calc = 1;
int i;
for(i = 0; i < expo; i++){
    calc = calc * base;
}
return calc;
}
int main() 
{
    int base, expo, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &expo);
    result = calculatePower(base, expo);
    printf("%d raised to the power of %d is %d\n", base, expo, result);
    return 0;
}