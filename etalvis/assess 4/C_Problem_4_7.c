#include <stdio.h>
int main()
{
    int x = 10;
loop:
    if (x < 100)
    {
        if (x & 1 && (x / 10 + x % 10 == 7))
            printf("%d\n", x);
        x++;
        goto loop;
    }
}