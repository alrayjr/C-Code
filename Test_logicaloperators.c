#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0)
        printf("%d is divisible by 2 and 3 - ", number);

    if (number % 2 == 0 || number % 3 == 0)
        printf("%d is divisible by 2 or 3 - ", number);

    if ((number % 2 == 0 || number % 3 == 0) &&
        !(number % 2 == 0 && number % 3 == 0))
        printf("%d is divisible by 2 or 3 but not both - ", number);
}
