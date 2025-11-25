#include <stdio.h>
int main()
{
    int x;
    for (x = 10; x < 100; x++)
        if (x / 10 + x % 10 == 6 && x % 2 == 0)
            printf("%d\n", x);
}