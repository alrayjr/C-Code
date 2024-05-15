//fig 4.1
// counter-controlled iteration
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;

    while (counter <= 10) {
        printf("%u\n", counter);
        ++counter;//incriment
    }
}
