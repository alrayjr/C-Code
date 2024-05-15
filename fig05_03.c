//fig 5.3
// creating and using program defined function
#include <stdio.h>
//#include <math.h>
int square(int y);
int main(void)
{
    for (int x = 1; x <= 10; ++x)
    {
        printf("id ", square(x));
    }
    puts("")
}
int square(int y)
{
    return y * y;
}
