#include <stdio.h>
int main()
{
    int x, count = 0, sum = 0;
    for (x = 1; x < 100000; x++)
    {
        sum = 0;
        for (int y = x; y > 0; y /= 10)
            sum += y % 10;
        if (sum == 14)
            count++;
    }
    printf("%d", count);
}