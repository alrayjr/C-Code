#include <stdio.h>
int main(void)
{
    printf("%f\n", 1234567.89);
    printf("%f\n", 1234567.0);
    printf("%f\n", 1234567);
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);
    printf("%+e\n", +1234567.89);
    printf("%e\n", -1234567.89);
    printf("%E\n", 1234567.89);
    printf("%g\n", 1234567.89);
    printf("%G\n", 1234567.89);
    printf("%g\n", 0.1234567);
    printf("%g\n", 1.23);
    printf("%g\n", 12.30);
}
