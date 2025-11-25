#include <stdio.h>
int main()
{
    int x, count = 0;
    for (x = 2; x < 10; x++)
    {
        int prime = 1;
        for (int p = 2; p * p <= x; p++)
            if (x % p == 0)
                prime = 0;
        if (prime == 1)
            count++;
    }
    printf("%d", count);
}