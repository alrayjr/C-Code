//fig 4.1\2
// counter-controlled iteration with for statement
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;//u can initialize var in or out of for loop, if out then u must put ; in loop
    for (; counter <=10; ++counter)
    {
        printf("%u\n", counter);
    }
}
// interchangable: counter = caounter + 1, counter += 1, ++counter, counter++
