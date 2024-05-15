

#include <stdio.h>

int main(void)
{

int number1;
int number2;
printf("10 random numbers \n");
for(int i=1; i<10; i++)
{
    printf( "%d\n", rand());
    printf( "%d\n", rand()%6);
}
}
