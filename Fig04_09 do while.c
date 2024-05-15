//fig 4.9
//using the do... while iteration
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;

    do
    {
        printf("%u\n", counter);
        ++counter;
    }
    while (counter <= 100000000);
}
