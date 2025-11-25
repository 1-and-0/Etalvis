#include <stdio.h>
int main()
{
    int x, sum = 0;
    for (x = 10; x < 100; x++)
        if (x / 10 == 7 && x % 2)
            sum += x;
    printf("%d", sum);
}