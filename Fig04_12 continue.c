//fig 4.12
//using continue statement in a for statment
#include <stdio.h>

int main(void)
{
    //loop 10 times
    for (unsigned int x = 1; x <= 10; ++x){
        //if x is 5, continue with next iteration
        if (x == 5 ||  x == 7)
    {
        continue;
    }
    printf("%u ", x);
    }
    printf("\nUsed continue to skip printing the value 5 and 7f\n");
}
