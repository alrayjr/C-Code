//exercise 5.16
#include <stdio.h>
int power ( long base, long exponent);
int main()
{
    int b;
    int e;
    printf("%s", "Enter integer base and exponent: ");
    scanf("%d%d",&b, &e);
    printf("%d is raised to the %d is: %d\n", b, e, power(b, e));
}
int power ( long base, long exponent)
{
    if ( 0 == exponent) {
        return 1;
    }
    else if (1 == exponent) {
        return base;
    }
    else{
        return base * power(base, exponent - 1);
    }
}

