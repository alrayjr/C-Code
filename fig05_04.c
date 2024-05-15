//fig 5.4
// finding max of 3 integers
#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
    int number1;
    int number2;
    int number3;
    int maxi;
    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    maxi = maximum(number1, number2, number3);
    printf("maximum is %d\n", maxi);
    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max){
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}
