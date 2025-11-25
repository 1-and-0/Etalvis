#include <stdio.h>
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    x = x % 1000 / 10;
    for (int p = 2; p * p < x; p++)
        if (x % p == 0)
        {
            printf("Not Prime");
            return 0;
        }
    printf("Prime");
}