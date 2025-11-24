#include <stdio.h>
int main()
{
    int x = 11;
loop:
    if (x < 20)
    {
        if (x % 2)
            printf("%d\n", x);
        x++;
        goto loop;
    }
}