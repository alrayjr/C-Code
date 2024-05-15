//fig 4.5
// summation with for
#include <stdio.h>

int main(void)
//{
//    unsigned int sum = 0;

//    for (unsigned int number = 2; number <= 100; number += 2)
//        {
//        sum = sum + number;
//    }
//    printf("Sum is %u\n", sum);
//}
//write a c program that display odd number 1 - 50 and display some of odd number 1 - 50
{
    unsigned int  number = 1;

    for (; number <= 50; number += 2)
        {
        printf("%u\n", number);
    }

}
