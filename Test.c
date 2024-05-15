#include <stdio.h>
int main(void)
{
    int income;
    int age;
    int ammount;
    float tax;
printf("Enter income\n");
scanf("%d", &income);
printf("Enter age\n");
scanf("%d", &age);

if(income <= 50,000)
{
    tax = 0.00;
}
if(income>50,000)
{
    if(income<=100,000)
    {
        tax - .07;
    }
    else
    {
        tax +.09;
    }
}

if(tax > 0.00){
    if(age>=60)
    {
    tax - .03;
    }
}
    ammount = income * tax;

    printf("%d\n", ammount);
    printf("%.2f\n", tax);
    if(age>=60)
    {
    printf("senior discount rate is %.2f", tax);
    }
}
