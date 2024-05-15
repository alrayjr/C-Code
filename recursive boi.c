//exercise 5.16
#include <stdio.h>
int integerPower ( int b, int e);
int main()
{
    int base;
    int exp;
    printf("%s", "Enter integer base and exponent: ");
    scanf("%d%d",&base, &exp);
    printf("%d to the power %d is: %d\n", base, exp, integerPower(base, exp));
}
int integerPower ( int b, int e)
{
    int product = 1;

    for (unsigned int i = 1; i <=e; ++i) {
        product = product * b;
    }
    return product;
}

