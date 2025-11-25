#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (int a = 100, b = 1; x / b > 10; b *= 10)
        for (int p = 1; p * p <= x / b % a; p++)
            if (p * p == x / b % a)
                count++;
    printf("%d", count);
}