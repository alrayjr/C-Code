#include <stdio.h>
int gcd (int a, int b);
int main(void)
{
    int x;
    int y;
    int results;
  printf("Give me a number ");
  scanf("%d", &x);
  printf("Give me another number ");
  scanf("%d", &y);

  results = gcd(x,y);
  printf("the GCD is %d", results);
}
int gcd(int a, int b)
{
 while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
