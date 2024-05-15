#include <stdio.h>
//using namespace std;
int main()
{
    printf("Entera year: ");
    int year;
    scanf("%d", &year)
    switch (year % 12)
    {
        case 0: printf("monkey\n"); break
        case 1: printf("rooster\n"); break
        case 2: printf("dog\n"); break
        case 3: printf("pig\n"); break
        case 4: printf("rat\n"); break
        case 5: printf("oxen\n"); break
        case 6: printf("tiger\n"); break
        case 7: printf("rabbit\n"); break
        case 8: printf("dragon\n"); break
        case 9: printf("snake\b"); break
        case 10: printf("horse\n"); break
        case 11: printf("sheep\n"); break
    }
}
