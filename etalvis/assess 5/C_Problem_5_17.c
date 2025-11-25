#include <stdio.h>
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    int check = x / 10 + x % 10 == 14 ? 1 : 0;
    for (int p = 2; p * p < x; p++)
        if (x % p == 0)
        {
            if (check)
                printf("Not Prime but sum of digits is 14");
            else
                printf("Not Prime and sum of digits is not 14");
            return 0;
        }
    if (check)
        printf("Prime and sum of digits is 14");
    else
        printf("Prime and sum of digits is not 14");
}