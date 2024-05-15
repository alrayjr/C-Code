//fig 4.11
//using break statement in a for statment
#include <stdio.h>

int main(void)
{
    unsigned int x;
    int sum = 0;
    //printf();
    //scanf();
    for (x = 1; x <= 20; x = x + 1)
    {
        sum = sum + x;
        if (sum >= 100){
            break;
        }
        printf("%u %d \n", x, sum);
    }
    printf("\nBroke out of look at x == %u\n", x);
}
