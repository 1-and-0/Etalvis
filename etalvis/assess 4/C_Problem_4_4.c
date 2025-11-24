#include <stdio.h>
int main()
{
    int x = 6, sum = 0;
loop:
    if (x > 0)
    {
        sum += x--;
        goto loop;
    }
    printf("%d", sum);
}