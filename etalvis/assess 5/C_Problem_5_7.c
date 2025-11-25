#include <stdio.h>
int main()
{
    int x;
    for (x = 10; x < 100; x++)
        if (x / 10 + x % 10 == 7 && x % 2)
            printf("%d\n", x);
}