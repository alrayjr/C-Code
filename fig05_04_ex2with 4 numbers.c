//fig 5.4
// finding max of 3 integers
#include <stdio.h>

int maximum(int w, int x, int y, int z);

int main(void)
{
    int number1;
    int number2;
    int number3;
    int number4;
    int maxi;
    printf("%s", "Enter four integers: ");
    scanf("%d%d%d%d", &number1, &number2, &number3, number4);
    maxi = maximum(number1, number2, number3, number4);
    printf("maximum is %d\n", maxi);
    return 0;
}

int maximum(int w, int x, int y, int z)
{
    int max = w;
    if (x > max){
        max = x;
    }
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}
