#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (; x > 0; x /= 10)
    {
        int prime = 1;
        for (int p = 2; p * p <= x % 10; p++)
            if (x % 10 % p == 0)
                prime = 0;
        if (prime && (x % 10 != 1))
            count++;
    }
    printf("%d", count);
}