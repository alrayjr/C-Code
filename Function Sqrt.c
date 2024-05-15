// using a library function function
#include <stdio.h>
#include <math.h>

int main(void)
{
    //int y = 0;
    //printf("please enter the number ");
    //scanf("%d", &y);
    //float sq = sqrt(y);
    //printf("square root of y is %.4f ", sq);
    //loop 10 times and calculate square root each time
    //for (int x = 1; x <= 10; ++x)
    //{
    //    printf("%.3f \n", sqrt(x));
    //}

    int y = 0;
    printf("please enter the number ");
    scanf("%d", &y);
    float sq = pow(y,0.5);
    printf("square root of y is %.4f ", sq);
}
